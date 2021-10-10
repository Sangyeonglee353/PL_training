from stackApp import * # include everything from stackApp module

# [ 1. check paraenthesis matching in an expression. ]
# [ 4. chek brackets ]
def testBraces(): # Define testBraces() function
    # [ 1-1. Check sample string ]
    print("[ 1-1. Check sample string ]")
    sa = StackApplications() # Initialize sa variable to StackApplication class
    str1 = ( "{ A[ (i+1)] = 0; }",
        "if( (i==0) && (j==0 )",
        "A[ (i+1] ) = 0;" ) # Create str1 variable for test
    for s in str1: # Check if the parentheses in the string are correct
        m = sa.checkBrackets(s) # Initialize m variable to the checking result
        print(s, " ---> ", m) # Print element and result
    print()
    
    # [ 1-2. Check sample header file ]
    print("[ 1-2. Check sample header file ]")
    with open('struct.h', 'r') as theFile: # Open 'struct.h' file in the read mode and as theFile.
        text = theFile.read() # Initialize text variable to Reading theFile.
        print(text) # Print text variable
        if sa.checkBrackets(text): # Check if the parentheses in the string are correct
            print("Brackets are balanced") # Print string if the parentheses is correct,
        else: # Otherwise,
            print("Brackets are not balanced") # Print string

# [ 2. evaluate postfix expressions ]
# [ 3. convert infix form to postfix form ]
def testMathExp(): # Define testMathExp()
    sa=StackApplications() # Initialize sa variable to StackApplications class
    infix1 = ['8', '/', '2', '-', '3', '+', '(', '3', '*', '2', ')'] # Create Sample Infix1
    infix2 = ['1', '/', '2', '*', '4', '*', '(', '1', '/', '4', ')'] # Create Sampel Infix2

    postfix1 = sa.Infix2Postfix(infix1) # Convert infix form to postfix form
    postfix2 = sa.Infix2Postfix(infix2) # Convert infix form to postfix form

    result1 = sa.evalPostfix(postfix1) # Evalate postfix1
    result2 = sa.evalPostfix(postfix2) # Evalate postfix2

    # Print each result value
    print('Infix expression 01 : ', infix1)
    print('postfix expression of infix expression 01: ', postfix1)
    print('Evaluation of expression 01: ', result1, end='\n\n')

    print('Infix expression 02: ', infix2)
    print('postfix expression of Infix expression 02: ', postfix2)
    print('Evaluation of expression 02:', result2)


def main():
    sa = StackApplications() # Initialize sa variable to StackApplication class
    #sa.testStack() # Excute StackApplication.testStack() function
    #sa.convertBase(26)
    testBraces() # Excute testBraces() function
    #testMathExp() # Excute testMathexp()

if __name__ == "__main__": # Excute main function if __name__ is __main__
    main()