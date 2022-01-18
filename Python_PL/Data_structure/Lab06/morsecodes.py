from binarynode import * # import everything from binarynode module
from queue import Queue # import Queue fromd queue module

# Define MorseCodes class
class MorseCodes: 
    # Initializer, Create node and Morse code table
    def __init__(self):
        self.root=Node()
        self.table = [ ('A', '.-'), ('B', '-...'), ('C', '-.-.'), ('D', '-..'),
        ('E', '.'), ('F', '..-.'), ('G', '--.'), ('H', '....'),
        ('I', '..'), ('J', '.---'), ('K', '-.-'), ('L', '.-..'),
        ('M', '--'), ('N', '-.'), ('O', '---'), ('P', '.--.'),
        ('Q', '--.-'), ('R', '.-.'), ('S', '...'), ('T', '-'),
        ('U', '..-'), ('V', '...-'), ('W', '.--'), ('X', '-..-'),
        ('Y', '-.--'), ('Z', '--..')]

    # Make Morse code tree for using the decision tree
    def makeMorseTree(self):
        for tp in self.table:
            code = tp[1] # Morse code
            node = self.root
            for c in code: # Move until before last Character 
                if c == '.':                    # Move left
                    if node.getLeft() is None : # Create Node if this node is empty
                        node.setLeft(Node())
                    node = node.getLeft()       # Move node
                elif c == '-':                   # Move right
                    if node.getRight() is None : # Create Node if this node is empty
                        node.setRight(Node())
                    node = node.getRight()      # Move node

            node.setData(tp[0]) # Alphabet of code

    # Print Morse code tree for using Queue()
    def printMorseTree(self):
        n=self.root
        queue = Queue()
        queue.put(n)
        while not queue.empty():
            n = queue.get()
            if n is not None:
                print(n, end='->')
                queue.put(n.getLeft())
                queue.put(n.getRight())

    # Algorithm of decode
    def decode(self, code):
        node = self.root
        for c in code:
            if c == '.':
                node = node.getLeft()
            elif c == '-':
                node = node.getRight()
        return node.data

    # Algotithm of encode
    def encode(self, ch):
        idx = ord(ch) - ord('A')
        return self.table[idx][1]