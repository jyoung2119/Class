#File Analysis

def main():
    song1File = open("textFile1.txt", 'r')
    song2File = open("textFile2.txt", 'r')
    sharedWords = []
    uniqueSong1 = []
    uniqueSong2 = []
    i = 0
    x = 0

    song1Text = song1File.read()
    song1Words = song1Text.split()
    song2Text = song2File.read()
    song2Words = song2Text.split()

    #Shared Words and unique words for first song
    for word in song1Words:      
        if song1Words[i] in song2Words:
            if song1Words[i] not in sharedWords:
                sharedWords.append(song1Words[i])
        else:
            if song1Words[i] not in uniqueSong1:
                uniqueSong1.append(song1Words[i])
        i += 1

    #Unique words for song 2
    for word in song2Words:
        if song2Words[x] not in song1Words:
            if song2Words[x] not in uniqueSong2:
                uniqueSong2.append(song2Words[x])
        x += 1

    print("Shared Words From textFile1.txt and textFile2.txt:", sharedWords)
    print("Unique Words From textFile1.txt:", uniqueSong1)
    print("Unique Words From textFile2.txt:", uniqueSong2)



main()