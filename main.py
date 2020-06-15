import config
from SpotifyProcessor import SpotifyProcessor
from Music import Music

def set_username(new_username):
	new_username = str(new_username)
	f = open('username.txt', 'w')
	f.write(new_username)
	f.close()

if __name__ == '__main__':
	set_username('omarlcobas')
	spotify_processor = SpotifyProcessor(
		config.SPOTIFY_CLIENT_ID,
		config.SPOTIFY_CLIENT_SECRET,
		str(open('username.txt', 'r').readline())
	)
	spotify_processor.fill_playlists_table()
	spotify_processor.list_playlists()
	spotify_processor.select_playlist(7)
	
	print(spotify_processor.current_song)
	spotify_processor.download_playlist(Music(), random_mode = True, video_mode = True)
