import tkinter

class tempGUI:
    def __init__(self):
        self.main_window = tkinter.Tk()
        self.main_window.geometry("265x100")

        self.fLabel = tkinter.Label(self.main_window, text = 'Fahrenheit:')
        self.fLabel.grid(row = 0, column = 0, sticky = "W")

        self.cLabel = tkinter.Label(self.main_window, text = "Celsius:")
        self.cLabel.grid(row = 0, column = 1, sticky = "W")
        
        self.fTextBox = tkinter.Entry(self.main_window, bd = 5)
        self.fTextBox.grid(row = 1, column = 0, sticky = "W")

        self.cTextBox = tkinter.Entry(self.main_window, bd = 5)
        self.cTextBox.grid(row = 1, column = 1, sticky = "W")

        self.f2cButton = tkinter.Button(self.main_window, text = ">>>>", command = self.fToC)
        self.f2cButton.grid(row = 2, column = 0, sticky = "W")

        self.c2fButton = tkinter.Button(self.main_window, text = "<<<<", command = self.cToF)
        self.c2fButton.grid(row = 2, column = 1, sticky = "W")

        self.main_window.title("Temperature Conversion")
        tkinter.mainloop()

    def fToC(self):
        conversion = (float(self.fTextBox.get()) - 32) / 1.8
        self.cTextBox.delete("0", "end")
        self.cTextBox.insert("0", conversion) 

    def cToF(self):
        conversion = (float(self.cTextBox.get()) * 1.8) + 32
        self.fTextBox.delete("0", "end")
        self.fTextBox.insert("0", conversion)   

my_gui = tempGUI()