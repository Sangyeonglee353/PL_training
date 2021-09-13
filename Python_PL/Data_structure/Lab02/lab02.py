import csv

class Bag:
    # Constructs an empty bag.
    def __init__(self):
        self.bag = []

    # Returns the number of items in the bag.
    def __len__(self):
        return len(self.bag)

    def __str__(self):
        st=''
        for item in self.bag:
            st += str(item) + ' '
        return st;

    # Determines if an item is contained in the bag.
    def __contains__(self, item):
        return item in self.bag

    # Adds a new item to the bag.
    def add(self, item):
        self.bag.append(item)

    # Removes and returns an instance of the item from the bag.
    def remove(self, pos):
        return self.bag.pop(pos)


class Files:
    def txtFile(self, file1):

        with open(file1, 'r') as theFile:
            text = theFile.read()
        word_counts = {} # empty Dictionary

        # count occurrences of each unique word
        for word in text.split():
            if word in word_counts:
                word_counts[word] += 1 # update existing key-value pair
            else:
                word_counts[word] = 1 # insrt new key-value pair

        print('Frequency of each word')
        for word, count in sorted(word_counts.items()):
            #print(word, " = ", count, " , ", end= ' ')
            print(word, " = ", count)

        print('\nNumber of unique words:', len(word_counts))

        letter_counts = {}
        # same concept is 36~41
        for letter in text:
            letter_counts[letter] = letter_counts.get(letter, 0) + 1
        
        print('Frequency of each letter')
        for letter, count in sorted(letter_counts.items()):
            #print(letter, " = ", count, " , ", end = ' ')
            print(letter, " = ", count)

        print('\nTotal number of distinct letters:', len(letter_counts))

    def csvFile(self):
        with open('countrycode.csv') as csv_file:
                codeDict = {}
                csv_reader = csv.reader(csv_file, delimiter = ', ')
                count = 0
                for row in csv_reader:
                    codeDict[row[1]] = row[0]
                    count += 1

                for code in codeDict:
                    print('{} \t : {}'.format(code, codeDict[code]))
                
                print('No of Countries = {}'.format(count))
                print('No of countries = {}'.format(len(codeDict)))