import tkinter
from tkinter import messagebox

class MyGUI:
    def __init__(self):
        self.main_window = tkinter.Tk()
        self.main_window.geometry("300x150")

        self.label1 = tkinter.Label(self.main_window, text = "Daytime Category")
        self.label1.grid(row = 0, column = 0, sticky = "W")

        self.radio_var = tkinter.IntVar()
        self.radio_var.set(1)

        self.rb1 = tkinter.Radiobutton(self.main_window, text = "Daytime (6 A.M. - 5:59 P.M.)",\
                    variable = self.radio_var, value = 1)
        self.rb1.grid(row = 1, column = 0, sticky = "W")

        self.rb2 = tkinter.Radiobutton(self.main_window, text = "Evening (6 P.M. - 11:59 P.M.)",\
                    variable = self.radio_var, value = 2)
        self.rb2.grid(row = 2, column = 0, sticky = "W")

        self.rb3 = tkinter.Radiobutton(self.main_window, text = "Off-Peak (Midnight. - 5:59 A.M.)",\
                    variable = self.radio_var, value = 3)
        self.rb3.grid(row = 3, column = 0, sticky = "W")

        self.label2 = tkinter.Label(self.main_window, text = "Number of Minutes:")
        self.label2.grid(row = 4, column = 0, sticky = "W")

        self.textBox = tkinter.Entry(self.main_window, bd = 5)
        self.textBox.grid(row = 5, column = 0, sticky = "W")

        self.button1 = tkinter.Button(self.main_window, text = "Calculate", command = self.calcRate)
        self.button1.grid(row = 5, column = 2, sticky = "W")

        tkinter.mainloop()

    def calcRate(self):
        userInput = float(self.textBox.get())

        if self.radio_var.get() == 1:
            charge = userInput * 0.07
        elif self.radio_var.get() == 2:
            charge = userInput * 0.12
        else:
            charge = userInput * 0.05

        messagebox.showinfo('Phone Charge', 'You will be charged $' + str(format(charge, '.2f')))
        

my_gui = MyGUI()