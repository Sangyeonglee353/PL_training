LINES = 9 # defining LINE = 9
from math import pi, sqrt # include pi and sqrt function from math module

class Functions: #Defining the function class
    def getPTriples(self, n): # Defining the getPTriples function
        print("Triples within side lengths " + str(n))
        for a in range(1, n+1):
            for b in range(1, n+1):
                for c in range(1, n+1):
                    if (a*a + b*b == c*c):
                        print("(", a, ", ", b, ", ", c, ")")

    def factorial(self, n): # Defining the factorial function using a recursive function
        if (n<0):
            print("Incorrect input")
        elif(n==0 or n==1):
            return 1
        else:
            return n*self.factorial(n-1)

    def printData(self): # Defining the printData function
        name = input('What is your name? ') # After printing this string, input the name from the keyboard.
        age = int(input('What is your age? ')) # After printing this string, input the age from the keyboard.
        income = float(input('What is your income? ')) # After printing this string, input the income as a float type form the keyboard.

        # Printing my information.
        print('Here is the data you entered:')
        print('Name:', name)
        print('Age:', age)
        print('Income:', income)

    def drawTriangles(self): # Defining the drawTriangles function
        for line in range(1, LINES +1): # Draw the upper Triangles
            print(" " * (line-1), end="")
            print("*" * (2*LINES+1-2*line))

        print() 

        for line in range(LINES, 0, -1): # Draw the under Triangles
            print(" " * (line -1), end="")
            print("*" * (2*LINES+1-2*line))    


class Point(): # Defining the Point class
    def __init__(self, x1=0, y1=0): # Initializer, it creates the instance variables  x and y with default of (0, 0)
        self.x=x1
        self.y=y1
    
    def __str__(self): # Return a descriptive string for this instance
        #return "(" + str(self.x) +"," + str(self.y) +")" # case 1: using the '+' operator
        return "({}, {})".format(self.x, self.y)          # case 2: using the.format

    def __repr__self(self): # Return a command string to re-create this instance
        return 'Point(x={}, y={})'.format(self.x, self.y)

    def __add__(self, right): # Override the '+' operator: create and return a new instance
        #p = Point(self.x + right.x, self.y + right.y)
        self.x = self.x + right.x
        self.y = self.y + right.y
        #return p
        return self

    def __mul__(self, factor): # Override the '*' operator: modify and return this instance
        self.x = self.x * factor
        self.y = self.y * factor
        return self

class Complex: #Defining the Complex class
    def __init__(self, re=0.0, im=0.0): # Initializer, it creates the instance variables  _re and _im with default of (0.0, 0.0)
        self._re = re
        self._im = im

    def re(self): # Return the _re
        return self._re
    
    def im(self): # Return the _im
        return self._im

    def conjugate(self): # Change the sign 
        return Complex(self._re, -self._im) 

    def __add__(self, other): # Override the '+' operator: create and return a new instance
        re = self._re + other._re
        im = self._im + other._im
        return Complex(re, im)

    def __mul__(self, other): # Override the '*' operator: modify and return this instance
        re = self._re*other._re - self._im *other._im
        im = self._re *other._im + self._im*other._re
        return Complex(re,im)

    def __eq__(self, other): # Logically compares the two _re and _im
        return (self._re == other._re) and (self._im == other._im)
    
    def __ne__(self, other): # Returns the opposite of __eq__ value
        return not self.__eq__(other)

    def __abs__(self): # Returns the magnitude of self
        return sqrt(self._re*self._re + self._im*self._im)

    def myabs(self): 
        return sqrt(self._re*self._re + self._im*self._im)

    def __str__(self): # Return a descriptive string for this instance
        #return str(self._re) + ' + ' + str(self._im) + 'i' # case 1 : using a operator '+'
        return "{}+{}i".format(self._re, self._im)          # case 2 : using a format.()
        
class Circle: # Defining a Circle class
    """A Circle instance models a circle with a radius""" # Docstring
    def __init__(self, radius=1.0): # Initializer with default radius of 1.0
        self.radius=radius 

    def __str__(self): # Return a command string to recreate this instance
        #return '({:.2f})'.format(self.radius)
        return 'Circle(r={:.2f})'.format(self.radius) 

    def __repr__(self): # Return a command string to recreate this instance
        return 'C(r={:.2f})'.format(self.radius) 

    def get_area(self): # Return the area of this Circle instance
        """ This function computes area of the Circle""" # Docstring
        return self.radius *self.radius *pi 

class Cylinder(Circle): # Defining a Cylinder class
    """The Cylinder class is a subclass of Circle""" # Docstring
    def __init__(self, radius=1.0, height=1.0): # Initializer, it creates the instance variables radius and height with default of (1.0, 1.0)
        super().__init__(radius) # include variable radius from parent class
        self.height = height

    def __str__(self):  # Return a descriptive string for this instance
        return 'Cylinder(r={:.2f}, h={:.2f})'.format(self.radius, self.height)
    
    def __repr__(self): # Return a command string to re-create this instance
        return 'Cylinder2(r={:.2f}, h={:.2f})'.format(self.radius, self.height)

    def get_volume(self): # Return the volume of this instance
        return self.get_area() * self.height


    
