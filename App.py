from tkinter import *
import config
from SpotifyProcessor import SpotifyProcessor
from Music import Music

class App:
	def __init__(self):
			self.app = Tk()
			self.app.title('Download Spotify Playlists')
			self.app.geometry('') # 1000x500
			username_text = StringVar()
			username_label = Label(self.app, text='Spotify Username', font=('bold', 14), pady=15)
			username_label.pack()
			
			username_entry = Entry(self.app, textvariable=username_text, borderwidth = 4)
			username_entry.pack()

			username_button = Button(self.app, text="Submit", command = lambda: self.second_window(username_entry.get()))
			username_button.pack()
			self.app.mainloop()

	def quit(self):
			self.app.destroy()

	def set_username(self, new_username):
		new_username = str(new_username)
		f = open('username.txt', 'w')
		f.write(new_username)
		print('username set')
		f.close()

	def second_window(self, new_username):
		self.set_username(new_username)
		self.quit()
		self.app = Tk()
		self.app.title('Download Spotify Playlists')
		self.app.geometry('')
		v = IntVar()
		spotify_processor = SpotifyProcessor(
			config.SPOTIFY_CLIENT_ID,
			config.SPOTIFY_CLIENT_SECRET,
			str(open('username.txt', 'r').readline())
		)

		spotify_processor.fill_playlists_names()
		playlists_names = spotify_processor.playlists_names

		Label(self.app, 
         text="""Choose a playlist
to download:""",
         justify = LEFT,
         padx = 20).pack()

		CheckVar1 = IntVar()
		CheckVar2 = IntVar()
		C1 = Checkbutton(self.app, text = "Random Mode", variable = CheckVar1, \
										onvalue = 1, \
										width = 20)
		C2 = Checkbutton(self.app, text = "Video Mode", variable = CheckVar2, \
										onvalue = 1,
										width = 20)

		C1.pack()
		C2.pack()

		for val, playlists_name in enumerate(playlists_names):
			Radiobutton(self.app,
			text=playlists_name,
			padx = 20,
			variable=v,
			value=val).pack(anchor=W)

		playlist_button = Button(self.app, text="Submit Playlist",command=lambda:
			spotify_processor.download_playlist(
				v.get() + 1, Music(), random_mode = CheckVar1.get(), video_mode = CheckVar1.get()
			)
		)
		playlist_button.pack()