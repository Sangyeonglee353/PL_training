from stackADT import * # include everything from stackADT module

class StackApplications: # Defining the StackApplications class
    def testStack(self): # Define testStack() function
        odd = Stack() # Initialize odd variable to Stack() class
        even = Stack() # Initalize even variable to Stack() class
        for i in range(20): # During 0~19, Classifies odd and even numbers
            if i%2 == 0: # If the rest is 0 when dividing by 2,
                even.push(i) # Push even stack
            else: # If the rest is not 0 when dividing by 2,
                odd.push(i) # Push odd stack

        print('even stack', even) # Print even stack
        print('odd stack: ', odd) # Print odd stack
        print('even stack: ', even.pop()) # Print even.pop() element
        print('odd stack: ', odd.pop()) # Print odd.pop() element
        print('even stack', even) # Print even stack after even.pop()
        print('odd stack: ', odd) # Print odd stack after odd.pop()
        print('even stakc: ', even.peek()) # Print even.peek() element
        print('odd stack: ', odd.peek()) # Print odd.peek() element
        print('even stack', even) # Print even stack after even.peek()
        print('odd stack: ', odd) # Print odd stack after odd.peek()
        print(odd.find(13)) # Print the result of odd.find(13)
        print(odd.display()) # Print odd.display()

        # for item in even: # print even stack
        #     if item <= 10:
        #         print("item is less than 10 ->", item)
        #     else:
        #         print("item is greater than 10 ->", item)

        for item in range(len(even)): # Print even stack using pop()
            print(even.pop(), end = ' ')


    def convertBase(self, num): # Define convertBase() function
        s = Stack() # Initialize s variable to Stack class
        while (num != 0): # During num is not 0,
            r = num%2 # r is num % 2
            s.push(r) # Push 'r' to the stack s
            num = num//2 # num is num // 2
        print("Base 2 conversion") # Print "Base 2 conversion" string

        while (s.isEmpty() == False): # if stack s is not empty,
            print(s.pop(), end='') # Print stack s element through pop() function.

    # [ 1. Check parenthesis matching in an expression. ]
    # [ 4. Check brackets ]
    # Condition #1: The number of left parentheses and the number of right parantheses must be the same.
    # Condition #2: In paraentheses of the same type, the left parentheses must come before the right parentheses.
    # Condition #3: Different tpyes of parenthesis pairs should not coress each other.

    def checkBrackets(self, statement): # Define checkBrackets() function
        stack = Stack() # Initialize stack variable to Stack() class
        for ch in statement: # For each character in the string,
            if ch in ('(', '[', '{'): # if 'ch' coincides with '([{',
                stack.push(ch) # Push 'ch' to the stack 
            elif ch in (')', ']', '}'): # if 'ch' coincides with ')]}',
                if stack.isEmpty(): # if the stack is empty,
                    return False # Return False because it violated the Condition #2.
                else: # if the stack is not empty,
                    left = stack.pop() # Initialize left variable to the top element from the stack
                    # Check Condition #3
                    if (ch == "}" and left != "{") or \
                        (ch == "]" and left != "[") or \
                        (ch == ")" and left != "(") :
                        return False # Return False because it violated the Condition #3.
        return stack.isEmpty() # Check Condition #1
            
    # [ 3. convert infix form to postfix form ]
    def precedence(self, op): # Define precedence() function to decide the priority.
        if(op=='(' or op ==')'): # if 'op' is '(' or ')',
            return 0; # Return 0
        elif(op== '+' or op=='-'): # if 'op' is '+' or '-',
            return 1; # Return 1
        elif(op=='*' or op=='/'): # if 'op' is '*' or '/',
            return 2; # Return 2
        else: return -1 # Otherwise return -1

    def Infix2Postfix(self, expr): # Define Infix2Postfix() function, [expr: input list(Infix)]
        s = Stack() # Initialize s variable to Stack class.
        output = [] # Create output list variable, [output: output list(Postfix)]
        for term in expr : # For each 'term' in the 'expr',
            if term in '(': # if 'term' coincides with '(',
                s.push('(') # Push '(' to the stack s.

            elif term in ')': # if 'term' coincides with ')',
                while not s.isEmpty(): # During stack s is not empty,
                    op = s.pop() # Initialize op variable to the top element from the stack s.
                    if op == '(': # if 'op' is '(',
                        break; # End while()
                    else: # if 'op' is not '(',
                        output.append(op) # Append 'op' to the output list.
            
            elif term in "+-*/": # if 'term' coincides with '+-*/",
                while not s.isEmpty(): # During stack s is not empty,
                    op = s.peek() # Initialize op variable to the top element from the stack s.
                    if(self.precedence(term) <= self.precedence(op)): # Compare the priority
                        output.append(op) # Append 'op' to the output list
                        s.pop() # Return the top element with removing it from the stack s.
                    else: break # End while()
                s.push(term) # Push 'term' to the stack s.
            
            else: # if the conditions don't match,
                output.append(term) # Append 'term' to the output list.
        
        while not s.isEmpty(): # During statck s is not empty, After for()
            output.append(s.pop()) # Append all the remaining items in the stack

        return output # Return output(Posfix)
    
    # [ 2. evaluate postfix expression ]
    def evalPostfix(self, expr): # Define evalPostfix() function
        s = Stack() # Create stack object
        for token in expr : # For all the items on the list,
            if token in "+-*/": # If the items is operator,
                val2 = s.pop() # Intialize val2 variable
                val1 = s.pop() # Intialize val1 variable
                # Push each operation value into the stack according to the token.
                if(token == '+'): s.push(val1 + val2)
                elif(token == '-'): s.push(val1 - val2)
                elif(token == '*'): s.push(val1 * val2)
                elif(token == '/'): s.push(val1 / val2)
            else: # If the items is not operater, 
                s.push(float(token)) # Change the token to float type and store it in the stack.
        return s.pop() # Returns the final result value.