import tkinter

class MyGUI:
    def __init__(self):
        self.main_window = tkinter.Tk()
        self.main_window.configure(background = 'green')

        self.labelRed = tkinter.Label(self.main_window, text = 'RED', fg = 'red', background = 'green')
        self.labelRed.pack()

        self.labelWhite = tkinter.Label(self.main_window, text = 'WHITE', fg = 'white', background = 'green')
        self.labelWhite.pack()

        self.labelBlue = tkinter.Label(self.main_window, text = 'BLUE', fg = 'blue', background = 'green')
        self.labelBlue.pack()
        
        tkinter.mainloop()

my_gui = MyGUI()