import os
import youtube_dl

class Music:
	def __init__(self):
		# self.url = url
		self.ydl_opts = {
			'format': 'bestaudio/best',
			'quiet': True,
			'postprocessors': [{
				'key': 'FFmpegExtractAudio',
				'preferredcodec': 'mp3',
				'preferredquality': '192',
			}],
			'default_search': 'ytsearch',
			'outtmpl': './songs/%(title)s.%(ext)s'
    }
	
	def download_song(self, url, playlist_name):
		self.ydl_opts['outtmpl'] = f'./{playlist_name}/%(title)s.%(ext)s'
		with youtube_dl.YoutubeDL(self.ydl_opts) as ydl:
			print('Downloading audio now\n')
			ydl.download([url])