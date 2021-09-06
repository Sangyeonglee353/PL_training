LINES = 9

def getPTriples(n):
    print("Triples within side lengths " + str(n))
    for a in range(1, n+1):
        for b in range(1, n+1):
            for c in range(1, n+1):
                if (a*a + b*b == c*c):
                    print("(", a, ", ", b, ", ", c, ")")

def  drawTriangles():
    for line in range(1, LINES +1):
        print(" " * (line-1), end="")
        print("*" * (2*LINES+1-2*line))

    for line in range(LINES, 0, -1):
        print(" " * (line -1), end="")
        print("*" * (2*LINES+1-2*line))

def factorial(n):
    if (n<0):
        print("Incorrect input")
    elif(n==0 or n==1):
        return 1
    else:
        return n*factorial(n-1)

def printData():
    name = input('What is your name? ')
    age = int(input('What is your age? '))
    income = float(input('What is your income? '))

    print('Here is the data you entered:')
    print('Name:', name)
    print('Age:', age)
    print('Income:', income)


def main():
    #printData()
    #print(factorial(10))
    #drawTriangles()
    getPTriples(50)

if __name__ == "__main__":
    main()