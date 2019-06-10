'''
Unique Words
Write a program that opens a specified text file and then displays a list of all the unique
words found in the file.
Hint: Store each word as an element of a set.
'''

# get name of input file
input_name = input("Enter the name of the input file: ")
    
# open the input file and read the text
input_file = open(input_name, 'r')
text = input_file.read()
words = text.split()

# create set of unique words
unique_words = set(words)

# print the results
print("These are the unique words in the text:")
for word in unique_words:
    print(word)

# close the file
input_file.close()

'''
Word Frequency
Write a program that reads the contents of a text file. The program should create a dictionary
in which the keys are the individual words found in the file and the values are the
number of times each word appears. For example, if the word “the” appears 128 times,
the dictionary would contain an element with 'the' as the key and 128 as the value.
The program should either display the frequency of each word or create a second file
containing a list of each word and its frequency.
'''
# Set up empty dictionary
counter = {}

# Get input text
input_name = input("Enter the name of the input file: ")
input_file = open(input_name, 'r')
text = input_file.read()
words = text.split()

# Add each unique word to dictionary with a counter of 0
unique_words = set(words)
for word in unique_words:
    counter[word] = 0

# For each word in the text increase its counter in the dictionary
for item in words:
    counter[item] += 1

# Display results
print(format("word", '15'),"\t",format("occurrences",'15'))
print("----------------------------------------------")
while len(counter)>0:

    pair = counter.popitem()
    print(format(pair[0],'15'), format(pair[1], '15'))