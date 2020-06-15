import config
from SpotifyProcessor import SpotifyProcessor
from Music import Music
from flask import Flask, jsonify, request, send_file, make_response
import redis
from rq import Queue
import zipfile
import os
from io import BytesIO

app = Flask(__name__)
# r = redis.Redis()
# q = Queue(connection = r)

# sudo service redis-server start
# rq worker
def zipdir(path, ziph):
	# ziph is zipfile handle
	for root, dirs, files in os.walk(path):
		for file in files:
			ziph.write(os.path.join(root, file))


@app.route('/playlists/<username>', methods = ['GET'])
def get_playlists(username):
	set_username(username)
	spotify_processor = SpotifyProcessor(
		config.SPOTIFY_CLIENT_ID,
		config.SPOTIFY_CLIENT_SECRET,
		str(open('username.txt', 'r').readline())
	)
	spotify_processor.fill_playlists_table()

	return jsonify(spotify_processor.playlists_table)

@app.route('/playlist/', methods = ['GET'])
def get_playlist():
	username = request.args.get('username')
	playlist_number = str(request.args.get('number'))
	print('yer', playlist_number)
	set_username(username)
	spotify_processor = SpotifyProcessor(
		config.SPOTIFY_CLIENT_ID,
		config.SPOTIFY_CLIENT_SECRET,
		str(open('username.txt', 'r').readline())
	)
	spotify_processor.fill_playlists_table()
	spotify_processor.list_playlists()
	spotify_processor.select_playlist(int(playlist_number))
	
	print(spotify_processor.current_song)
	spotify_processor.download_playlist(
		Music(),
		random_mode = True,
		video_mode = True
	)
	# zipf = zipfile.ZipFile(
	# 	f'{spotify_processor.selected_playlist}.zip',
	# 	'w',
	# 	zipfile.ZIP_DEFLATED
	# )
	# zipdir(f'{spotify_processor.selected_playlist}/', zipf)
	# # zipf.close()
	BASE_PATH = './'
	some_directory = f'{spotify_processor.selected_playlist}/'
	dir_path = os.path.join(BASE_PATH, some_directory)
	if os.path.isdir(dir_path):
			buff = BytesIO()
			with zipfile.ZipFile(buff, 'w', zipfile.ZIP_DEFLATED) as my_zip:
					for root, dirs, files in os.walk(dir_path):
							for file in files:
									my_zip.write(os.path.join(root, file))

			buff.seek(0, 0)  # Not sure if required
			response = make_response(buff.read())
			response.headers['Content-type'] = 'application/zip'
			return response
	else:
			return 'Directory does not exist', 404


	# return send_file(f'./{spotify_processor.selected_playlist}.zip', attachment_filename = f'{spotify_processor.selected_playlist}.zip')
# /playlists/username : POST -> send username -> return playlists table
# /playlists/username/playlist/<playlist number> : POST -> send playlist number -> calls select_playlist(number) -> and  

def set_username(new_username):
	new_username = str(new_username)
	f = open('username.txt', 'w')
	f.write(new_username)
	f.close()

if __name__ == '__main__':
	# set_username('omarlcobas')
	# spotify_processor = SpotifyProcessor(
	# 	config.SPOTIFY_CLIENT_ID,
	# 	config.SPOTIFY_CLIENT_SECRET,
	# 	str(open('username.txt', 'r').readline())
	# )
	# spotify_processor.fill_playlists_table()
	# spotify_processor.list_playlists()
	# spotify_processor.select_playlist(5)
	
	# print(spotify_processor.current_song)
	# spotify_processor.download_playlist(
	# 	Music(),
	# 	random_mode = True,
	# 	video_mode = True
	# )
	app.run(debug=True)
