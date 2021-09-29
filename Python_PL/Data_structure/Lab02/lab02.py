import csv # include csv module
import math # include math module
import random # import for using the random function

class GradeBook: # Defining the GradeBook class
    def __init__(self): # Initialize grade_book dictionary
        self.grade_book={} # dictionary type {key:value,...}

    def readInput(self): # file open and close, With block don't need close() method
        with open('Gradesinput.csv','r') as csv_file: # open 'Gradesinput.csv' file with read mode
            csvf = csv.reader(csv_file, delimiter=',') # Read csv file with delimiter colon
            headLine = True # Check the headLine condition
            for row in csvf: # Repeat row by row
                if headLine: # Check whether it's the first line or not
                    headLine = False # Change the condition of headLine variable
                    continue # skip the header line
                name = row[0] # Initialize name variable to row[0] value
                grades = row[1:8] # row slicing 1 to 7
                self.grade_book[name] = grades # input the data to dictionary, (name:key, grades:value)
    
    def printInput(self): # Defining the printInput function
        print("Input data") # Print string
        for name in self.grade_book: # Print grade book data as under the format
            print('{} \t : {}'.format(name,self.grade_book[name]))
    
        print() # Line feed for seperating between printInput and readInput

    def computerGrades(self): # Defining the computerGrades function
        self.readInput() # Excute readInput function
        self.printInput() # Excute printInput function
        print("Grade report") # Print string
        for name in self.grade_book: # Read grade_book dictionary
            total = 0 # Initialize total variable to 0 for calculating total grade
            row = self.grade_book[name] # Change row variable to value of name(key)
            for index in range(len(row)): # Repeat as long as length of row
                thisGrade = row[index] # Change thisGrade variable to row[index]
                if thisGrade == '': # if thisGrade is blank, thisGrade is 0.0
                    thisGrade = 0.0
                else: # Accumulate total grade
                    total = total + float(thisGrade)

            percent = (total/200) * 100 # Change the format to percent

            letterGrade = self.letterGrade(percent) # Get the letterGrade using function

            print("{:<15} Percent = {}, Letter Grade = {}".format(name, percent, letterGrade))

    def letterGrade(self, score): # Depending on the score, return the letter
        if score >= 90: # score >= 90
            letter = 'A'
        elif score >= 80: # score < 90 && score >= 80
            letter = 'B'
        elif score >= 70: # score < 80 && score >= 70
            letter = 'C'
        elif score >= 60: # score < 70 && score >= 60
            letter = 'D'
        else:             # score < 60
            letter = 'F'
        return letter

class EightQueens: # Defining the EightQueens class
    def __init__(self): # Initialize data memeber
        self.rng = random.Random() # Get random number
        self.bd = list(range(8)) # Get board list

    def solve(self): # Defining the solve algorithm
        sol_found = 0 # Initialize the sol_found variable to 0
        tries = 0 # Initialize the trise variable to 0
        while sol_found < 50: # Repeat until you find 50 solutions.
            self.rng.shuffle(self.bd) # Shuffle the list
            tries += 1 # Count the number of attempts
            if not self.has_clashes(): # Check the coordinate clashes
                sol_found += 1 # Count the solution number
                print("solution {} : {} in {} tries.".format(sol_found, self.bd, tries)) # print result
                tries = 0 # Initalize the tries variable to 0 for counting next solution

    def has_clashes(self): # Check the coordinate clashes
        for col in range(1, len(self.bd)): # Repeat 1 to length of list
            if self.col_clashes(col): # Check the column clashes
                return True
        return False
    
    def col_clashes(self, c): # Check the column clashes
        for i in range(c): # Repeat range(c) 
            if self.diagonal_clashes(i, self.bd[i], c, self.bd[c]): # Check the diagonal clashes
                return True
        return False

    def diagonal_clashes(self, x0, y0, x1, y1): # Check two queens in the same diagonal
        dy = abs(y1 - y0) # Calc the absolute y distance
        dx = abs(x1 - x0) # Calc the absolute x distance
        return dx == dy # Return the result of condition(True or False)


class Vector: # Defining the Vector class
    def __init__(self, a): # Initializer, it creates a new Vector object with Cartesian coordinates taken from array a[]
        self._coords = a[:] # Get the all empty list
        self._n = len(a) # Get list length

    def __getitem__(self, i): # ith Cartesian coordinate of x
        return self.__coords[i]

    def __add__(self, other): # Override the '+' operator: create and return a new instance
        result = [0]*self._n # Initialize all list value to 0
        for i in range(self._n): # Repeat as length of list
            result[i] = self._coords[i] + other._coords[i] # Add the other coordinate
        return Vector(result) # Return new Vector(result)

    def __sub__(self, other): # Override the '-' operator: create and return a new instance
        result = [0]*self._n # Initialize all list value to 0
        for i in range(self._n): # Repeat as legnth of list
            result[i] = self._coords[i] - other._coords[i] # Subtract the other coordinate
        return Vector(result) # Return new Vector(result)

    def scale(self, alpha): # scaler product of float alpha and x
        result = [0]*self._n # Initialize all list value to 0
        for i in range(self._n): # Repeat as length of list
            result[i] = alpha * self._coords[i] # Mulitple alpha and my coordinate
        return Vector(result) # Return new Vector(result)
    
    def dot(self, other): # dot product of x and y
        result = 0 # Initialize result value to 0
        for i in range(self._n): # Repeat as length of list
            result += self._coords[i]*other._coords[i] # Accumulate the result of multipling my coordinate and other coordinate
        return result # Return result value
    
    def __abs__(self): # magnitude of x
        return math.sqrt(self.dot(self))

    def direction(self): # unit vector with same direction as x
        return self.scale(1.0 / abs(self)) 

    def __str__(self): # string representation of x
        return str(self._coords) 

    def __len__(self): # length of x
        return self._n

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