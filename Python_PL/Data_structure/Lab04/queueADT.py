MAX_QSIZE = 10 # Define Queue size

# 1. Data structure to hold the passengers.
class CircularQueue : # Defining CircularQueue class.
    def __init__(self): # Initializer
        self.front = 0 # Initialize front of queue variable to 0.
        self.rear = 0  # Initialize rear of queue variable to 0.
        self.items = [None] * MAX_QSIZE # Initalize item storage list. [None, None, ...]

    # Checks whether Queue is empty or not.
    def isEmpty(self): # Define isEmpty() function.
        return self.front == self.rear # Return True if front = rear, otherwise False.

    # Checks whether Queue is full or not.
    def isFull(self): # Define isFull() function.
        return self.front == (self.rear+1)%MAX_QSIZE # Return True if list is Full, otherwise False.
                                                     # Rear + 1 to distinguish it from a Empty state.
    def clear(self): # Define clear() function
        self.front = self.rear # Change the front value with the rear value

    def __len__(self): # Override '__len__()'
        return (self.rear - self.front + MAX_QSIZE) % MAX_QSIZE # Return the number of items stored in the queue.

    def enqueue(self, item): # Define enqueue() function to Inserting value.
        if not self.isFull(): # if Queue is not Full state,
            self.rear = (self.rear + 1) % MAX_QSIZE # # Change the rear value to next value.
            self.items[self.rear] = item # Store item into the item storage list.

    def dequeue(self): # Define dequeue() function to Deleting value.
        if not self.isEmpty(): # if Queue is not Empty,
            self.front = (self.front + 1) % MAX_QSIZE # Change the front value to next value.
            return self.items[self.front] # Return the item at the front location.

    def peek(self): # Define peek() function 
        if not self.isEmpty(): # if Queue is not Empty,
            return self.items[(self.front+1) % MAX_QSIZE] # Returns the first data of the queue.
    
    def print(self): # Define print() function
        out = [] # Create out list variable
        if self.front < self.rear: # if front value is smaller than rear value,
            out = self.items[self.front+1:self.rear+1] # Store items slicing data into out list variable
        else: # if front value is not smaller than rear value,
        #    list1 = self.items[self.front+1:MAX_QSIZE]
        #    list2 = self.items[0:self.rear+1]
        #    list = list1 + list2
            out = self.items[self.front+1:MAX_QSIZE] \
                + self.items[0:self.rear+1] # Store items slicing data into out list variable

        print ("[f=%s, r=%d] ==> "%(self.front, self.rear), out) # Print out(Queue data)

class CircularDeque(CircularQueue): # Defining CircularDeque class
    def __init__(self): # Initializer
        super().__init__() # Get the variables of super class
    
    # Adds an item at the rear of Deque.
    def addRear(self, item): # Define addRear() function
        self.enqueue(item) # Excute enqueue() function

    # Deletes an item front of Deque
    def deleteFront(self): # Define deleteFront() function
        return self.dequeue() # Return the result of dequeue() function

    # Gets the front item from Dueue.
    def getFront(self): # Define getFront() function
        return self.peek() # Return the result of peek() function
    
    # Adds an item at the front of Deque.
    def addFront(self, item): # Define addFront() function
        if not self.isFull(): # if Queue is not Full,
            self.items[self.front] = item # Insert 'item' into the front location element.
            self.front = (self.front - 1 + MAX_QSIZE) % MAX_QSIZE # Change the front value
        
    # Deletes an item from front of Deque.
    def deleteRear(self): # Define deleteRear() function
        if not self.isEmpty(): # if Queue is not Empty, 
            item = self.items[self.rear] # Copy the rear location element into item.
            self.rear = (self.rear - 1 + MAX_QSIZE) % MAX_QSIZE # Change the rear value
            return item # Return item

    # Gets the last item from Deque.
    def getRear(self): # Define getRear() function
        return self.items[self.rear] # Return the item at the rear location.