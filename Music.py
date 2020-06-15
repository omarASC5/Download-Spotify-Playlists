import os
import youtube_dl

class Music:
	def __init__(self):
		self.ydl_opts = {
			'quiet': True,
			'default_search': 'ytsearch',
			'outtmpl': './songs/%(title)s.%(ext)s'
    }
	
	def download_song(self, url, playlist_name, video_mode = False):
		self.ydl_opts['outtmpl'] = f'./{playlist_name}/%(title)s.%(ext)s'
		if not video_mode:
			self.ydl_opts['format'] = 'bestaudio/best'
			self.ydl_opts['postprocessors'] = [{
				'key': 'FFmpegExtractAudio',
				'preferredcodec': 'mp3',
				'preferredquality': '192',
			}]

		with youtube_dl.YoutubeDL(self.ydl_opts) as ydl:
			print('Downloading audio now\n')
			ydl.download([url])