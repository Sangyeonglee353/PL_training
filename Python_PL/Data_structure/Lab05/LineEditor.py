from singlylinkedlist import * # Import everything from singlylinkedlist module

# Define LineEditor class for using LineEditor
class LineEditor:
    # Initializer for the LineEditor
    def __init__(self):
        self.list = singlyLinkedList()

    # Define runLineEditor for operating Line Editor
    def runLineEditor(self):
        while True:
            command = input("i=insert, d=delete, r=replace, p=print, l=loadfile, s=writefile, q=quit -> ")
            if command == 'i' : self.addLine()
            elif command == 'd' : self.deleteLine()
            elif command == 'r' : self.replaceLine()
            elif command == 'p' : self.printByLine()
            elif command == 'l' : self.loadFromFile()
            elif command == 's' : self.writeToFile()
            elif command == 'q' : return

    # Define addLine() function for adding line
    def addLine(self):
        pos = int(input("input line number: "))
        str = input("input line text : ")
        self.list.addAt(pos, str) # built-in string

    # Define deleteLine() function for deleting line
    def deleteLine(self):
        pos = int(input(" input line number : "))
        self.list.deleteAt(pos)

    # Define replaceLine() function for replacing line
    def replaceLine(self):
        pos = int(input("input line number : "))
        str = input("input modified text: ")
        self.list.replaceDataAT(pos, str)

    # Define printByLine() function for printing line number and data
    def printByLine(self):
        self.list.printByLine()
    
    # Define loadFromFile() function for loading from file
    def loadFromFile(self):
        # filename = input(" read from file ")
        filename = 'test.txt' # set the specific file name
        with open(filename, "r") as infile: # with = include open & close 
            lines = infile.readlines()
            for line in lines:
                self.list.addAt(self.list.getSize(), line.rstrip('\n'))

    # Define writeToFile() function for writing to file
    def writeToFile(self):
        # filename = input(" write to file ")
        filename =  'test.txt' # set the specific file name
        with open(filename, "w") as outfile:
            sz = self.list.getSize()
            for i in range(sz):
                outfile.write(self.list.getDataAt(i)+'\n')