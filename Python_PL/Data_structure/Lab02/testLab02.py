from Lab01 import * # include everything from Lab01 module
from Lab02 import * # include everything from Lab02 module

def testString():
    st = 'Hello, World' # single quotes
    print(st)

    st = "Hello, World" # double quotes
    print(st)
    st = """String literals can
    span multiple lines."""
    print(st)

    #The str() constructer
    st = str('abs')
    st = str(234)
    st = str(2+5j)
    st = str('ABCDEFGHI')
    print(st)

    print(st[0])  # Prints A
    print(st[4])  # Prints E
    print(st[-1]) # Prints I
    print(st[-6]) # Prints D

    #slicing
    print(st[2:5])   # Prints CDE
    print(st[5:-1])  # Prints FGH
    print(st[1:6:2]) # Prints BDF
    print(st[:-1])   # IHGFEDCBA - Reverse a String

    # st[1] = 'J' # error Stirng is not mutable
    print(st) 

    # string functions
    st = 'The quick brown fox jumps over the lazy dog'
    print(dir(st)) # List all attributes of the object st
    print(len(st)) # String Length
    print(st.lower())
    print(st.upper())
    print(st.capitablize()) # first letter
    print(st.title()) # first letter each word
    print(st.find('dog'))

    #Iterate through a String
    for letter in st:
        print(letter, end=' ') # read before ' '

def testList():
    # creating Lists
    list1=['hello', 'how', 'are', 'you', 1, 10, 'how', 'well', 'are'] # created a simple list
    print(list1)
    print(len(list1)) # length of the list1
    print(list1[0]) # first element
    print(list1[0]) # last element

    print(list1[-9]) # first element
    print(list1[-1]) # last element

    # slicing
    print(list1[:3]) # left-closed type data retrieval
    print(list1[2:5]) # 2~4 are retrived
    print(list1[2:]) # 2~6 elements are retrieved.
    print(list1[:4]) # 0~3 elements.
    print(list1[-1:]) # -1 implies last element of the list
    print(list1[:-1]) # only the last element is skipped
    print(list1[:-2]) # last and last-before elements are skipped (-1 and -2 respectively)
    print(list1[::-1]) # to reverse the order

    # Deleting items list
    del list1[4] # the list1[4] was deleted and replaced by the next element in the list
    print(list1)
    list1.remove('how')
    print(list1)

    # Replacing elements
    list1[4] = 1232
    print(list1)

    # inserting element as position 4
    list1.insert(4, 111)
    print(list1)

def test_tuples():
    list1 = ['hello', 'how', 'are', 'you', 1, 10, 'how', 'well', 'are']
    tuples1 = tuple(list1)
    print(tuples1)

    tup = (12, 34, 56)
    tuples1 = 'hello', 'how', 'are', 1, 1232, 'well'
    print(tuples1)
    print(dir(tup)) # print attritubets of object tuple

def test_dict():
    # Lets store age of people as dictionary
    dict1 = {"Julie": 32, "Rahul": 23, "Jasmine": 12, "Jack": 15, "Jennifer": 18}
    print(dict1)
    print(dict1['Jasmine']) # To retrive values
    print(dict1.keys()) # To get list of keys
    print(dict1.values()) # To get list of values

    dict1 = dict([('Julie', 32), ('Rahul', 23), ('Jasmine', 12)]) # method 2 to create dict
    print(dict1)
    dict_ = dict(Julie = 32, Rahul=23, Jasmine = 12) # method 3 to create dict
    print(dict1)
    print(type(dict1))

    dict1 = {x: 4*x for x in range(1,5)} # method 4 - list comprehension technique
    print(dict1)
    print(type(dict1))

    # printing dict
    for k, v in dict1.items():
        print(k, v)

    dict_reversed = {v:k for k, v in dict1.items()} # Note the curly braces
    print(dict_reversed)

def test_sets():
    list1 = {'hello', 'how', 'are', 'you', 1, 10, 'how', 'well', 'are'}
    set1 = set(list1)
    print(set1)
    set_ = {'hello', 'how', 'are', 1, 1232, 'well'}
    print(set1)
    st1 = {123, 4.5, 'hello', 123, 'Hello'}
    print(st1)
    print(88 in st1)
    st2 = set([2, 1, 3, 1, 3, 2])
    print(st2)
    st3 = set('hellllo')
    print(st3)
    st4 = {'a', 'e', 'i', 'o', 'u'}
    print(st3 | st4)
    print(st3 & st4)
    print(st3 - st4)
    print(st3 ^ st4)

    # set1[2] = 'lel' will not work as the values cannot be replaced
    set_.add('lel') # values can be added - dynamic
    print(set1)

def testBag():
    b1 =Bag() # Bag is type
    print(dir(b1))
    b1.add(Point(2,3))
    b1.add(Point(2,13))
    b1.add(Point(12, 3))
    b1.add(Point(14,16))
    print("Bag of Points = " , b1)
    b1.remove(2)
    print("Bag of Points = ", b1)
    
    b2 = Bag()
    b2.add(13); b2.add(14); b2.add(15); b2.add(213); b2.add(-13)
    print(b2)


def testFiles():
    frw = Files()
    frw.txtFile('license.txt')
    frw.csvFile()

def testVector(): # Defining the testVector function 
    xCoords = [1.0, 2.0, 3.0, 4.0] # Initialize array xCoords
    yCoords = [5.0, 2.0, 4.0, 1.0] # Initialize array yCoords
    x = Vector(xCoords) # a new Vector object with Cartesian coordinates taken from array xCoords[]
    y = Vector(yCoords) # a new Vector object with Cartesian coordinates taken from array yCoords[]

    print('x       = ' + str(x))  # Print x coordinate
    print('y       = ' + str(y))  # Print y coordinate
    print('x+y     = ' + str(x+y)) # Print sum of x and y
    print('10x     = ' + str(x.scale(10.0))) # Print scalar product of 10.0 and x
    print('|x|     = ' + str(abs(x))) # Print magnitude of x
    print('<x, y>  = ' + str(x.dot(y))) # Print dot product of x and y
    print('|x - y| = ' + str(abs(x-y))) # Print magnitude of difference of x and y

def testEightQueens(): # Defining the testEightQueens function
    eq=EightQueens() # Initialize eq variable to EightQueens class
    eq.solve() # Excute solve function from EigthQueens class

def testGradeBook(): # Defining the testGreadeBook function
    gb=GradeBook() # Initialize gb variable to GradeBook class
    gb.computerGrades() # Excute computerGrades function from GradeBook class

def main(): # Defining the main function 
    #testString()
    #testList()
    #test_tuples()
    #test_dict()
    #test_sets()
    #testBag()
    #testFiles()
    #testVector() # Excute testVector function
    #testEightQueens() # Excute testEightQueens function
    testGradeBook() # Excute testGradeBook function

if __name__ == "__main__": # Excite main function if __name__ is __main__
    main()