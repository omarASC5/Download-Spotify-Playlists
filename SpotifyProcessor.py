import random
import spotipy
import spotipy.oauth2 as oauth2
import Music
import time
import concurrent.futures
class SpotifyProcessor:
	def __init__(self, spotify_client_id, spotify_client_secret, spotify_username):
		self.spotify_client_id = spotify_client_id
		self.spotify_client_secret = spotify_client_secret
		self.spotify_username = spotify_username
		self.playlists_table = {}
		self.playlists_names = []
		self.selected_playlist_index = 1
		self.selected_playlist = ''
		self.selected_songs = []
		self.current_song = ''

		self.credentials = oauth2.SpotifyClientCredentials(
			client_id = self.spotify_client_id,
			client_secret = self.spotify_client_secret
		)

		self.token = self.credentials.get_access_token(as_dict = False)
		self.spotify = spotipy.Spotify(auth = self.token)
		self.playlists = self.spotify.user_playlists(self.spotify_username)

	def show_tracks(self, tracks, playlist_name):
			for item in tracks['items']:
				track = item['track']
				try:
					self.playlists_table[playlist_name].append(
						(track['artists'][0]['name'], track['name'])
					)
				except:
					continue

	def fill_playlists_table(self):
		if not self.token:
			print("Can't get token for", self.spotify_username)
		else:
			for playlist in self.playlists['items']:
				self.playlists_table[playlist['name']] = []
				self.playlists_names.append(playlist['name'])
				results = self.spotify.playlist(
					playlist['id'],
					fields = 'tracks,next'
				)
				tracks = results['tracks']
				self.show_tracks(tracks, playlist['name'])

				while tracks['next']:
					tracks = self.spotify.next(tracks)
					self.playlists_names.append(playlist['name'])
					self.show_tracks(tracks, playlist['name'])

	def fill_playlists_names(self):
		if not self.token:
			print("Can't get token for", self.spotify_username)
		else:
			for playlist in self.playlists['items']:
				self.playlists_names.append(playlist['name'])


	def list_playlists(self):
		index = 1
		for playlist in self.playlists_table.keys():
			print(f'{index}. {playlist}')
			index += 1

	def select_playlist(self, new_index):
		if new_index < 1 or new_index > len(self.playlists_table.keys()):
			print(f'Please select a playlist number in range: [1, {len(self.playlists_table.keys())}]')
			return
		else:
			self.selected_playlist_index = new_index

		i = 1
		for playlist, songs in self.playlists_table.items():
			if i == self.selected_playlist_index:
				self.selected_playlist = playlist
				self.selected_songs = songs
				break
			i += 1

	def random_song(self):
		temp_song = random.choice(self.selected_songs)
		self.current_song = \
		f'Playing {temp_song[1]} by {temp_song[0]}'
		return temp_song

	def song_at_index(self, index):
		temp_song = self.selected_songs[index]
		self.current_song = \
		f'Playing {temp_song[1]} by {temp_song[0]}'
		return temp_song

	def currently_playing(self):
		return self.current_song

	def download_music(self, processing):
		if processing[2]:
			self.random_song()
		else:
			self.song_at_index(processing[1])
			music2 = processing[0]
			music2.download_song(
				self.current_song,
				self.selected_playlist,
				video_mode = processing[3]
			)

	# 2 Pac No Threading Download Time: 150 seconds
	# 2 Pac WITH Threading Download Time: 71.4 seconds -> Double Performance
	def _download_playlist(self, music, random_mode = False, video_mode = False):
		to_process = [[music, index, random_mode, video_mode] for index in range(len(self.selected_songs))]

		with concurrent.futures.ThreadPoolExecutor(max_workers=5) as executor:
			executor.map(self.download_music, to_process)

	def download_playlist(self, index, music, random_mode = False, video_mode = False):
		print('test', random_mode, video_mode)
		self.fill_playlists_table()
		self.select_playlist(index)
		start = time.perf_counter()
		self._download_playlist(music, random_mode, video_mode)
		finish = time.perf_counter()
		print(f'Finished in {finish - start} seconds')