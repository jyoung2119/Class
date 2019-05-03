import tkinter

class MyGUI:
    def __init__(self):
        self.main_window = tkinter.Tk()
        self.main_window.geometry("270x200") 

        self.labelTest1 = tkinter.Label(self.main_window, text = 'Enter the score for test 1:')
        self.labelTest1.grid(row = 0, column = 0, sticky = "W")

        self.test1Text = tkinter.Entry(self.main_window, bd = 5)
        self.test1Text.grid(row = 0, column = 1, sticky = "W")

        self.labelTest2 = tkinter.Label(self.main_window, text = 'Enter the score for test 2:')
        self.labelTest2.grid(row = 1, column = 0, sticky = "W")

        self.test2Text = tkinter.Entry(self.main_window, bd = 5)
        self.test2Text.grid(row = 1, column = 1, sticky = "W")

        self.labelTest3 = tkinter.Label(self.main_window, text = 'Enter the score for test 3:')
        self.labelTest3.grid(row = 2, column = 0, sticky = "W")

        self.test3Text = tkinter.Entry(self.main_window, bd = 5)
        self.test3Text.grid(row = 2, column = 1, sticky = "W")

        self.outputLabel = tkinter.Label(self.main_window, text = 'Average:')
        self.outputLabel.grid(row = 3)

        self.avgButton = tkinter.Button(self.main_window, text = 'Average', command = self.average)
        self.avgButton.grid(row = 4)

        self.quitButton = tkinter.Button(self.main_window, text = 'Quit', command = self.main_window.destroy)
        self.quitButton.grid(row = 4, column = 1)

        tkinter.mainloop()

    def average(self):
        test1Input = float(self.test1Text.get())
        test2Input = float(self.test2Text.get())
        test3Input = float(self.test3Text.get())

        average = (test1Input + test2Input + test3Input) / 3
        string = 'Average: ' + str(format(average, '.2f'))
        self.outputLabel['text'] = string

my_gui = MyGUI()