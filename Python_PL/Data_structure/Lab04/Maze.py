from queueADT import * # include everything from queueADT module
from stackADT import * # include everything from stackADT module

class Cell: # Defining Cell class
    def __init__(self, r=0, c=0): # Initializer
        self.row=r # Initialize row variable to r
        self.col=c # Initialize col variable to c
    def __str__(self): # Override '__str__()'
        return "(" + str(self.row) + ", " + str(self.col) + ")" # Return coordinate string

class Maze: # Defining Maze class
    MAZE_SIZE = 6 # Maze size if 6
    def getMap(self): # Define getMap() function
        map = [ ['e', '1', '1', '1', '1,', '1'],
                ['0', '0', '1', '0', '0', '1'],
                ['1', '0', '0', '0', '1', '1'],
                ['1', '0', '1', '0', '1', '1'],
                ['1', '0', '1', '0', '0', 'x'],
                ['1', '1', '1', '1', '1', '1']]
        return map # return map data

    def isValidPos(self, x, y, map): # Define isValidPos() function to check whether (x,y) can go or not.
        if(x < 0 or y < 0 or x >= self.MAZE_SIZE or y >= self.MAZE_SIZE):
            return False # If (x,y) is outside the maze, you can't go.
        else: # If (x,y) is ('x') or ('0'), you can go.
            return map[y][x] == '0' or map[y][x] == 'x'

    # DFS1: It serach maze using stack from CircularDeque (front and operations)
    def DFS1(self): # Define DFS1() function
        map = self.getMap() # Get map data
        deq = CircularDeque() # Create object through CircularDeque class
        entry = Cell(0,0) # Starting point
        deq.addFront(entry) # Adds an item at the front of Deque.
        print('\n DFS1: using Stack from CircularDeque (front end operations):')

        while not deq.isEmpty(): # Repeat if Deque is not empty()
            here = deq.deleteFront()
            print(here, end ='->') # Print current location.
            x = here.row
            y = here.col
            if(map[y][x] == 'x') : return True # Return True if cell is 'x'
            else: # Check the Valid Position if cell is not 'x'
                map[y][x] = '.' # '.' mark that it has passed its current location.
                # If you can check your neighbors in four directions, insert them into the Deque.
                if self.isValidPos(x - 1, y, map) : deq.addFront(Cell(x - 1, y)) 
                if self.isValidPos(x + 1, y, map) : deq.addFront(Cell(x + 1, y)) 
                if self.isValidPos(x, y - 1, map) : deq.addFront(Cell(x, y - 1)) 
                if self.isValidPos(x, y + 1, map) : deq.addFront(Cell(x, y + 1)) 
        return False # Return False if searching Failed

    # DFS2: It serach maze using Stack
    def DFS2(self): # Define DFS1() function
        map = self.getMap() # Get map data
        stack = Stack() # Create object through Stack class
        entry = Cell(0,0) # Starting point
        stack.push(entry) # Adds an item at the stack.
        print('\n DFS2: using Stack:')

        while not stack.isEmpty(): # Repeat if Deque is not empty()
            here = stack.pop() # Take out the item.
            print(here, end ='->') # Print current location.
            x = here.row
            y = here.col
            if(map[y][x] == 'x') : return True # Return True if cell is 'x'
            else: # Check the Valid Position if cell is not 'x'
                map[y][x] = '.' # '.' mark that it has passed its current location.
                # If you can check your neighbors in four directions, insert them into the Stack.
                if self.isValidPos(x - 1, y, map) : stack.push(Cell(x - 1, y)) 
                if self.isValidPos(x + 1, y, map) : stack.push(Cell(x + 1, y))
                if self.isValidPos(x, y - 1, map) : stack.push(Cell(x, y - 1)) 
                if self.isValidPos(x, y + 1, map) : stack.push(Cell(x, y + 1)) 
        return False # Return False if searching Failed

    # DFS3: It serach maze using Stack from CircularDeque (rear and operations)
    def DFS3(self): # Define DFS3() function
        map = self.getMap() # Get map data
        deq = CircularDeque() # Create object through CircularDeque class
        entry = Cell(0,0) # Starting point
        deq.addRear(entry) # Adds an item at the rear of Deque.
        print('\n DFS3: using Stack from CircularDeque (rear end operations):')

        while not deq.isEmpty(): # Repeat if Deque is not empty()
            here = deq.deleteRear() # Take out the item.
            print(here, end ='->') # Print current location.
            x = here.row
            y = here.col
            if(map[y][x] == 'x') : return True # Return True if cell is 'x'
            else: # Check the Valid Position if cell is not 'x'
                map[y][x] = '.' # '.' mark that it has passed its current location.
                # If you can check your neighbors in four directions, insert them into the Deque.
                if self.isValidPos(x - 1, y, map) : deq.addRear(Cell(x - 1, y)) 
                if self.isValidPos(x + 1, y, map) : deq.addRear(Cell(x + 1, y))
                if self.isValidPos(x, y - 1, map) : deq.addRear(Cell(x, y - 1)) 
                if self.isValidPos(x, y + 1, map) : deq.addRear(Cell(x, y + 1)) 
        return False # Return False if searching Failed

    # BFS1: It serach maze using Queue from CircularDueue
    def BFS1(self): # Define BFS1() function
        map = self.getMap() # Get map data
        que = CircularDeque() # Create object through CircularQueue class
        entry = Cell(0,0) # Starting point
        que.enqueue(entry) # Adds an item at the rear of Deque.
        print('\n BFS1: using Queue Data Structure from CircularDeque:')

        while not que.isEmpty(): # Repeat if Queue is not empty()
            here = que.dequeue() # Take out the item.
            print(here, end ='->') # Print current location.
            x = here.row
            y = here.col
            if(map[y][x] == 'x') : return True # Return True if cell is 'x'
            else: # Check the Valid Position if cell is not 'x'
                map[y][x] = '.' # '.' mark that it has passed its current location.
                # If you can check your neighbors in four directions, insert them into the Queue.
                if self.isValidPos(x, y - 1, map) : que.enqueue(Cell(x, y - 1)) 
                if self.isValidPos(x, y + 1, map) : que.enqueue(Cell(x, y + 1)) 
                if self.isValidPos(x - 1, y, map) : que.enqueue(Cell(x - 1, y)) 
                if self.isValidPos(x + 1, y, map) : que.enqueue(Cell(x + 1, y)) 
        return False # Return False if searching Failed

    # BFS2: It serach maze using Queue from CircularQueue
    def BFS2(self): # Define BFS2() function
        map = self.getMap() # Get map data
        que = CircularQueue() # Create object through CircularQueue class
        entry = Cell(0,0) # Starting point
        que.enqueue(entry) # Adds an item at the rear of Queue.
        print('\n BFS2: using Queue Data Structure from CircularQueue:')

        while not que.isEmpty(): # Repeat if Queue is not empty()
            here = que.dequeue() # Take out the item.
            print(here, end ='->') # Print current location.
            x = here.row
            y = here.col
            if(map[y][x] == 'x') : return True # Return True if cell is 'x'
            else: # Check the Valid Position if cell is not 'x'
                map[y][x] = '.' # '.' mark that it has passed its current location.
                # If you can check your neighbors in four directions, insert them into the Queue.
                if self.isValidPos(x, y - 1, map) : que.enqueue(Cell(x, y - 1)) 
                if self.isValidPos(x, y + 1, map) : que.enqueue(Cell(x, y + 1)) 
                if self.isValidPos(x - 1, y, map) : que.enqueue(Cell(x - 1, y)) 
                if self.isValidPos(x + 1, y, map) : que.enqueue(Cell(x + 1, y)) 
        return False # Return False if searching Failed