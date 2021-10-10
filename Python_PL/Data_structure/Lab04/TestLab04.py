from queueADT import * # include everything from queueADT module
from MediaPlayer import * # include everything from MediaPlayer module
from TCS import * # include everything from TCS module
from Maze import * # include everything from Maze module

def testCircularQueue():
    print('Test Queue')
    q = CircularQueue()
    for i in range(10):
        q.enqueue(i)
    print('  enqueue () x9: ', end='')
    q.print()
    print('   dequeue ()--->', q.dequeue())
    print('   dequeue ()--->', q.dequeue())
    print('   dequeue ()--->', q.dequeue())
    print('  dequeue () x3: ', end='')
    q.print()

    q.clear()
    q.enqueue('aaa')
    q.enqueue('bbb')
    q.enqueue('ccc')
    q.enqueue('ddd')
    print('  enqueue () x4: ', end='')
    q.print()
    print('   dequeue()--->', q.dequeue())
    print('  dequeue() x9 ', end='')
    q.print()
    print('   peek()--->', q.peek())
    print('\n')

def testMPQ():
    track1 = Track("white whistle")
    track2 = Track("butter butter")
    track3 = Track("Oh black star")
    track4 = Track("Watch that chicken")
    track5 = Track("Don't go")
    mp = MediaPlayerQueue()
    mp.add_track(track1)
    mp.add_track(track2)
    mp.add_track(track3)
    mp.add_track(track4)
    mp.add_track(track5)
    mp.play()

# [ Task-3: Ticketing Counter System ]
def runSimulation(): # Define runsimualtion() function
    # numAgent: 5, numMinutes: 50, betweenTime: 2, serviceTime: 10
    done = TicketCounterSimulation(5, 50, 2, 10) # Create Object through TicketCounterSimulation class
    done.run() # Run TicketcounterSimulation().run() function

# [ Task-4: Implement Deque Data Structure ]
def testCircularDeque(): # Define testCircularDeque() function
    print('Deque Test')
    q = CircularDeque() # Create object through CircularDeque() class
    for i in range(10): # Repeat enqueue in 0 to 9
        q.enqueue(i)
    print('  enqueue()x9: ', end='')
    q.print() # Print Deque element 
    print('    deleteFront()--->', q.deleteFront())
    print('    deleteFront()--->', q.deleteFront())
    print('    deleteFront()--->', q.deleteFront())
    print('    deleteRear()--->', q.deleteRear())
    print('    deleteRear()--->', q.deleteRear())
    print('  After Deque: ', end='')
    q.print() # Print Deque element

    print('Clear Deque')
    q.clear() # Clear Deque element
    q.addRear('aaa')
    q.addRear('bbb')
    q.addRear('ccc')
    q.addRear('ddd')
    print('  addRear()x4: ', end='')
    q.print() # Print Deque element
    print('    deleteRear()--->', q.deleteRear())
    print('  After Deque: ', end='')
    q.print() # Print Deque element
    print('    Front peek() == getFront()--->', q.getFront())
    print('    Rear peek() == getRear()--->', q.getRear())
    print('\n')

def main(): # Defining the main() function
    #testCircularQueue()
    #testMPQ()
    #runSimulation() # Excute runSimulation() function
    #testCircularDeque() # Excute testcircularDeque() function
    m=Maze() # Create object through Maze class
    m.DFS1() # Excute Maze.DFS1() function
    m.DFS2() # Excute Maze.DFS2() function
    m.DFS3() # Excute Maze.DFS3() function
    m.BFS1() # Excute Maze.BFS1() function
    m.BFS2() # Excute Maze.BFS2() function

if __name__ == "__main__": # Excute main() function if __name__ is __main__
    main()