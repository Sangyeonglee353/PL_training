""" This moudle is for testing problems in Lab01""" # This module doc string

from Lab01 import * # include everything from Lab01 module

def testFunctions(): # Defining the testFunction function
    fn = Functions() # variable initalization
    fn.drawTriangles() # Execute the drawTriangles function of Functions class
    fn.factorial(10) # Execute the factorial fuction of Functions class
    fn.getPTriples(30) # Execute the getPTriples function of Functions class
    fn.printData() # Execute the printData function of Functions class

def testPoint(): # Defining the testPoint function
    p1 = Point() # Create point
    print("P1 point", p1) # P1 point initializing
    p1.x = 5 # Change variable x value of P1 point
    p1.y = 6 # Change variable y value of P1 point
    print("p1 after assigning new values", p1)
    p2 = Point(3,4) # Creat the other point
    print("Point p2", p2) # P2 point initializing
    print(p1 + p2) # p1 = p1 add p2 and print result
    print(p1) # Print p1
    print(p2*3) # p2 = p2 multiply 3 and print result
    print(p2) # Print p2

def testComplex(): # Defining the testComplex function
    z0 = Complex(3.0, 1.0) # Initialize variable z0 using the Complex class
    print(z0) # Print z0
    z = Complex(3.0, 2.0) # Initialize variable z using the Complex class
    z = (z*z) + z0 # Calculate using the overriding function add and mul of Complex class
    print(z) # Print z
    print(z*z0) # Print result after cacluate using the overriding function mul of Complex class
    z = z + (z + z0)*z # Calculate using the overriding function add and mul of Complex class
    print(z) # Print z
    print("{:4.2f}".format(abs(z))) # Print this format after using the overriding function abs function of Complex class
    print("{:4.2f}".format(z.myabs())) # not overriding, this is using my ordinary function of Complex class
    
def testCircle(): # Defining the testCircle function
    """ This function test the Circle class""" # docstring
    c1 = Circle(2.1) # Initialize variable c1 using the Circle class 
    print(c1) # Print c1
    print("Area: {:.2f}".format(c1.get_area())) # Print this format after using the get_area function of Circle class
    print("Radius", c1.radius) # Print string and variable radius of c1
    print(str(c1)) # Print c1 using the overriding function str of Circle class
    print(repr(c1)) # Print c1 using the overriding function repr of Circle class

    c2 = Circle() # Initialize variable c2 using the Circle class 
    print(c2) # Print c2
    print(c2.get_area()) # Print c2 area after calculate using the get_area function of Circlass

    # Test doc-strings
    print(__doc__) # Print docstring of TestLab01
    print(Circle.__doc__) # Print docstring of Circle class
    print(Circle.get_area.__doc__) # Print docstring of get_area in Circle class

    print(isinstance(c1, Circle)) # Print result of Checking if c1 is an instance of Circle
    print(isinstance(c2, Circle)) # Print result of Checking if c2 is an instance of Circle
    print(isinstance(c1, str)) # Print result of Checking if c1 is an instance of str

class testCylinder(): # Defining the testCylinder function
    cy1 = Cylinder(1.1, 2.2) # Initialize variable cy1 using the Cylinder class
    print(cy1) # Print cy1
    print(cy1.get_area()) # Print result of calculate using the get_area function of Circle class
    print(cy1.get_volume()) # Print result of calculate using the get_volume function of Cylinder class
    print(cy1.height) # Print height of cy1
    print(str(str(cy1))) # Print result of using the overrding function str of Cylinder class
    print(repr(cy1)) # Print result of using the overrding function repr of Cylinder class

    cy2 = Cylinder() # Initialze variable cy2 using the Cylinder class
    print(cy2) # Print cy2, since thers is no format, the default output str function is used.
    print(cy2.get_area()) # Print result of calculate using the get_area function of Circle class
    print(cy2.get_volume()) # Print result of calculate using the get_volume function of Cylinder class

    print(issubclass(Cylinder, Circle)) # Print result of Checking if Cylinder is an instance of Circle
    print(issubclass(Circle, Cylinder)) # Print result of Checking if Circle is an instance of Cylinder
    print(isinstance(cy1, Cylinder)) # Print result of Checking if cy1 is an instance of Cylinder
    print(isinstance(cy1, Circle)) # Print result of Checking if cy1 is an instance of Circle
    c2 = Circle() # Initialize variable c2 using the Circle class
    print(isinstance(c2, Cylinder)) # Print result of Checking if c2 is an instance of Cylinder
    print(Cylinder.__base__) # Print parent(super) class of Cylinder class
    print(Circle.__subclasses__()) # Print child(sub) class of Circle class

def main(): # Defining the main function
    #testFunctions()
    #testPoint()
    #testComplex()
    testCircle()
    testCylinder()

if __name__ == "__main__": # Excute main() if __name__ is __main__ 
    main()