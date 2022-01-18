#from singlyLinkedList import *
from DoublyLinkedList import * # import everything from DoublyLinkedList

# Define Term class for the polyNomial
class Term:
    # Initializer for the ployNomial
    def __init__(self, sgn = None, coeff = None, expon = None):
        self.sgn = sgn 
        self.coeff = coeff 
        self.expon = expon 

    # Override '__str__' function to represent as String
    def __str__(self):
        return str(self.sgn) + str(self.coeff) + "x^" + str(self.expon) + ' '

    # Define getCoeff() function for getting coefficient
    def getCoeff(self):
        return self.coeff
    
    # Define getExpon() function for getting exponential
    def getExpon(self):
        return self.expon

    # Define getSgn() function for getting sign 
    def getSgn(self):
        return self.sgn

# Define SparsePoly class for the polyNomial
class SparsePoly(DoublyLinkedList):
    # Initializer for the polyNomial
    def __init__(self):
        super().__init__() # Called the initializer of the parent class

    # Define add() function for A + B
    def add(self, B):
        C = SparsePoly()
        a = self.head
        b = B.head
        while a != None or b != None: 
            if a == None or (b != None and a.data.expon < b.data.expon): # expon of b is bigger than expon of a
                C.addAt(C.getSize(), Term(b.data.sgn, b.data.coeff, b.data.expon))
                b = b.getNext()       
            elif b == None or (a != None and a.data.expon > b.data.expon): # expon of a is bigger than expon of b
                C.addAt(C.getSize(), Term(a.data.sgn, a.data.coeff, a.data.expon))
                a = a.getNext()
            elif a != None and b != None and (a.data.expon == b.data.expon): # expon of a and expon of b is same
                if a.data.sgn == b.data.sgn: # if sign is same,
                    C.addAt(C.getSize(), Term(a.data.sgn, a.data.coeff + b.data.coeff, a.data.expon))
                    a = a.getNext()
                    b = b.getNext()
                else:  # a.data.sgn != b.data.sgn: # if sign is different,
                    if a.data.coeff > b.data.coeff:
                        C.addAt(C.getSize(), Term(a.data.sgn, a.data.coeff - b.data.coeff, a.data.expon))
                        a = a.getNext()
                        b = b.getNext()
                    elif a.data.coeff < b.data.coeff:
                        C.addAt(C.getSize(), Term(b.data.sgn, b.data.coeff - a.data.coeff, a.data.expon))
                        a = a.getNext()
                        b = b.getNext()
                    else: # a.data.coeff == b.data.coeff
                        a = a.getNext()
                        b = b.getNext()               
        return C
                   
    # Define sub() function for A - B
    def sub(self, B):
        C = SparsePoly()
        a = self.head
        b = B.head
        while a != None or b != None: 
            if a == None or (b != None and a.data.expon < b.data.expon): # expon of b is bigger than expon of a
                C.addAt(C.getSize(), Term(b.data.sgn, b.data.coeff, b.data.expon))
                b = b.getNext()       
            elif b == None or (a != None and a.data.expon > b.data.expon): # expon of a is bigger than expon of b
                C.addAt(C.getSize(), Term(a.data.sgn, a.data.coeff, a.data.expon))
                a = a.getNext()
            elif a != None and b != None and (a.data.expon == b.data.expon): # expon of a and expon of b is smae
                if a.data.sgn != b.data.sgn: # if sign is different,
                    C.addAt(C.getSize(), Term(a.data.sgn, a.data.coeff + b.data.coeff, a.data.expon))
                    a = a.getNext()
                    b = b.getNext()
                elif a.data.sgn == b.data.sgn: # if sign is same,
                    if a.data.sgn == '+':
                        if a.data.coeff > b.data.coeff:
                            C.addAt(C.getSize(), Term(a.data.sgn, a.data.coeff - b.data.coeff, a.data.expon))
                            a = a.getNext()
                            b = b.getNext()
                        elif a.data.coeff < b.data.coeff:
                            C.addAt(C.getSize(), Term('-', b.data.coeff - a.data.coeff, a.data.expon))
                            a = a.getNext()
                            b = b.getNext()
                        else: # a.data.coeff == b.data.coeff
                            a = a.getNext()
                            b = b.getNext()
                    elif a.data.sgn == '-':
                        if a.data.coeff > b.data.coeff:
                            C.addAt(C.getSize(), Term(a.data.sgn, a.data.coeff - b.data.coeff, a.data.expon))
                            a = a.getNext()
                            b = b.getNext()
                        elif a.data.coeff < b.data.coeff:
                            C.addAt(C.getSize(), Term('+', b.data.coeff - a.data.coeff, a.data.expon))
                            a = a.getNext()
                            b = b.getNext()
                        else: # a.data.coeff == b.data.coeff
                            a = a.getNext()
                            b = b.getNext()
        return C

    # To Get the highest power -> 가장 높은 승수 가져오기
    def getDegree(self):
        node = self.head
        degree = node.data.expon
        while node is not None:
             if degree < node.data.expon:
                 degree = node.data.expon
             node = node.getNext()
        print("The highest degree of a polynomial: {}".format(degree))


    # Define display function for the all node
    def display(self, msg=""):
        print("\t", msg, end='')

        node = self.head
        while node is not None:
            print(node, end = '')
            node = node.getNext()
        print()

    # Define read() function for the operating of Polynomial
    def read(self):
        self.clear() # Clear the list
        while True:
            token = input("input term (sgn coef expon): ").split(" ")
            if token[0] == '-1' :
                self.display("The Polynomial: ")
                return
            #  / sign / opition / exponet
            self.addAt(self.getSize(), Term(token[0], float(token[1]), int(token[2])))
