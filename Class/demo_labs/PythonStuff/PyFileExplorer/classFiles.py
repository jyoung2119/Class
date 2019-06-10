try: import tkinter.filedialog as filedialog           # Py3
except ImportError: import tkFileDialog as filedialog  # Py2
import tkinter

class fileGUI:
    def __init__(self):
        self.main_window = tkinter.Tk()
        self.main_window.geometry("900x500")

        

        self.main_window.title("A1C Young Class Projects")
        tkinter.mainloop()


my_gui = fileGUI()