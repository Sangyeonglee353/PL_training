class Stack:
    def __init__(self): # Initierzier, it creates top list for stack
        self.top = []   

    def __len__(self): # Override '__len__()'
        return len(self.top) # Return size of stack

    def size(self): # Define size() function
        return len(self.top) # Return the number of items in the stack

    def isEmpty(self): # Define isEmpty() function for checking list status.
        return len(self.top) == 0 # Return True if the stack is empty, otherwise False.
                                  
    def clear(self): # Define clear() function for emptying the stack.
        self.top = []

    def __contains__(self, item): # Override '__contain__()'
        return item in self.top # Returns the result of whether the stack contains the item.

    def find(self, item): # Define find() function
        return item in self.top # Returns the result of whether the stack contains the item.

    def push(self, item): # Define push() function
        self.top.append(item) # Adds an element item on the top of the stack

    def pop(self): # Define pop() function
        if not self.isEmpty(): # if the stack is not empty,
            return self.top.pop(-1) # Return the top element with removing it from the stack.
        else: # if the stack is empty,
            print("Stack underflow") # Print "Stack underflow"
            exit()

    def peek(self): # Define peek() function
        if not self.isEmpty(): # if the stack is not empty,
            return self.top[-1] # Return the top element without removing it from the stack.
        else: # if the stack is empty,
            print("underflow")  # Print "underflow"
            exit()

    def __str__(self): # Override '__str__()'
        return str(self.top[::1]) # From start to finish, convert stack elements into the string.
        #return str(self.top)

        # st='['
        # for i in range(len(self.top)):
        #     st += str(self.top[i]) + ' '
        # st += ']'
        # return st

    def display(self, i = 0): # define display() function
        if i == len(self.top): return # Returns nothing if ths stack is empty,
        print(self.top[-(i+1)], end=' ') # Return the top element without removing it from the stack.
        self.display(i+1) # Implement display(i) function after i add 1(Recursive call)

    def __iter__(self): # Override '__iter__()'
        return _StackIterator(self.top) # Return the result of _StackInterator()

class _StackIterator: # Define _StackInterator class for changing list type to listiterator type.
    def __init__(self, theList): # Initierzier, 
        self._items = theList # Create class variable 
        self._curItem = 0     # Create class variable 

    def __iter__(self): # Override '__iter__()'
        return self     # Return self

    def __next__(self): # Overide '__next__()'
        if self._curItem < len(self._items): # During the stack size, Return the stack element
            item = self._items[self._curItem]
            self._curItem += 1
            return item
        else: # If it's not in the range of the stack,
            raise StopIteration # Raise StopIteration exception