#from tkinter import *
import tkinter

class MyGUI:
    def __init__(self):
        self.main_window = tkinter.Tk()
        self.main_window.geometry("210x120")

        self.iLabel = tkinter.Label(self.main_window, text = 'Gross income')
        self.iLabel.grid(row = 0, column = 0, sticky = "W")

        self.iTextBox = tkinter.Entry(self.main_window, bd = 5)
        self.iTextBox.grid(row = 0, column = 1, sticky = "W")

        self.dLabel = tkinter.Label(self.main_window, text = "Dependents")
        self.dLabel.grid(row = 1, column = 0, sticky = "W")

        self.dTextBox = tkinter.Entry(self.main_window, bd = 5)
        self.dTextBox.grid(row = 1, column = 1, sticky = "W")

        self.comButton = tkinter.Button(self.main_window, text = 'Compute', command = self.compute)
        self.comButton.grid(row = 2, column = 1, sticky = "W")

        self.tLabel = tkinter.Label(self.main_window, text = 'Total tax')
        self.tLabel.grid(row = 3, column = 0, sticky = "W")
        self.tTextBox = tkinter.Entry(self.main_window, bd = 5)
        self.tTextBox.grid(row = 3, column = 1, sticky = "W")

        self.main_window.title("Tax Calculator")
        tkinter.mainloop()

    def compute(self):
        income = self.iTextBox.get()
        dependents = int(self.dTextBox.get())
        income = float(income)

        taxes = (income*0.08) + dependents
        self.tTextBox.delete("0", "end")
        self.tTextBox.insert("0", taxes)

my_gui = MyGUI()