import tkinter
import random

class MyGUI:
    def __init__(self):
        self.attempts = 0
        self.rNum = random.randint(1, 100)
        self.main_window = tkinter.Tk()
        self.main_window.geometry("300x100")

        self.tLabel = tkinter.Label(self.main_window, text = 'Guess a # between 1 & 100.')
        self.tLabel.pack()

        self.gLabel = tkinter.Label(self.main_window, text = 'Your guess')
        self.gLabel.pack(side = 'left')

        self.textBox = tkinter.Entry(self.main_window)
        self.textBox.pack(side = 'right')

        self.bottom_frame = tkinter.Frame(self.main_window)
        self.bottom_frame.pack(side = 'bottom')

        self.nextButton = tkinter.Button(self.bottom_frame, text = 'Next', command = self.randoNum)
        self.nextButton.pack(side = 'left')

        self.newButton = tkinter.Button(self.bottom_frame, text = 'New Game', command = self.newGame)
        self.newButton.pack(side = 'right')

        self.main_window.title("Guessing Game")
        tkinter.mainloop()
    
    def randoNum(self):
        userInput = int(self.textBox.get())
        
        self.textBox.delete("0", "end")
        if userInput > self.rNum:
            self.tLabel['text'] = 'Sorry, too large!'
            self.attempts += 1
        elif userInput < self.rNum:
            self.tLabel['text'] = 'Sorry, too small!'
            self.attempts += 1
        else:
            string ='You have guessed it in ' + str(self.attempts) + ' attempts!'
            self.tLabel['text'] = string
            self.nextButton['state'] = 'disabled'
    
    def newGame(self):
        self.tLabel['text'] = "Guess a # between 1 & 100."
        self.textBox.delete("0", "end")
        self.nextButton['state'] = 'active'
        self.attempts = 0
        self.rNum = random.randint(1, 100)

my_gui = MyGUI()