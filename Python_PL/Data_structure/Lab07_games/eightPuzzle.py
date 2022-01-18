import copy
from queue import PriorityQueue
from queue import Queue
from queue import LifoQueue

n=3
directions = [[1, 0], [-1, 0], [0, 1],[0, -1]]
class State:
    def __init__(self, parent=None, puzzle=None):
        self.parent = parent
        self.puzzle = puzzle
        # f = g + h
        self.g = 0
        self.h = 0
        self.f = 0
    
    # Using for Compare element
    def __lt__(self, other):
        return self.f < other.f

    # Hash function: 
    def __hash__(self):
        return hash(self.f)

class EightPuzzle():
    def __init__(self,iPuzzle, fPuzzle):
        self.iPuzzle=iPuzzle
        self.fPuzzle=fPuzzle
        if not self.isSolvable():
            print("The instance is not solvable...")
            return 
        self.solveDFS()
        self.solveBFS()
        self.solveBnB()
    
    def solveBnB(self):
        print("\n Running Branch and Bound ...")
        iState = State(None, self.iPuzzle)

        # counter for expanded nodes
        expandedNodes = 0
        generatedNodes = 0

        # initialize open and closed list
        PQ = PriorityQueue()
        visited = []
        iState.g=0
        #iState.h = self.costManhattan(iState.puzzle,self.fPuzzle)
        iState.h = self.costHamming(iState.puzzle,self.fPuzzle)
        iState.f = iState.g + iState.h
        PQ.put(iState)
        expandedNodes += 1

        while not PQ.empty():
     
            cState = PQ.get()
            if cState.puzzle == self.fPuzzle:
                self.printPath(cState)
                print("BnB expanded nodes: {}, generated nodes: {}".format(
                expandedNodes, generatedNodes))
                return 

            # limit search depth
            if cState.g > 15:
                continue

            if not self.isInList(cState, visited):
                visited.append(cState)
                generatedNodes += 1

            # row and column of element '0'
            cRow, cCol = self.indexBTile(cState)

            # iterate through possible moves(create Children)
            for i in range(len(directions)):
                child=self.newState(cState,cRow, cCol,i)
                

                if not self.isInList(child, visited):
                    child.g += 1
                    child.h = self.costHamming(child.puzzle,self.fPuzzle)
                    #child.h = self.costManhattan(child.puzzle,self.fPuzzle)
                    child.f = child.g + child.h
                    PQ.put(child)
                    expandedNodes += 1
    
    def solveBFS(self):
        print("\n Running breadth-first search...")
        iState = State(None, self.iPuzzle)

        # counter for expanded nodes
        expandedNodes = 0
        generatedNodes = 0

        # initialize open and closed list
        queue = Queue()
        visited = []
        queue.put(iState)
        expandedNodes += 1

        while not queue.empty():
     
            cState = queue.get()
            if cState.puzzle == self.fPuzzle:
                self.printPath(cState)
                print("BFS expanded nodes: {}, generated nodes: {}".format(
                expandedNodes, generatedNodes))
                return 

            # limit search depth
            if cState.g > 15:
                continue

            if not self.isInList(cState, visited):
                visited.append(cState)
                generatedNodes += 1

            # row and column of element '0'
            cRow, cCol = self.indexBTile(cState)
            # iterate through possible moves(create Children)
            for i in range(len(directions)):
                child=self.newState(cState,cRow, cCol,i)
                
                if not self.isInList(child, visited):
                    child.g +=1
                    queue.put(child)
                    expandedNodes += 1
    
    def solveDFS(self):
        print("\n Running depth-first search...")
        iState = State(None, self.iPuzzle)
        expandedNodes = 0
        generatedNodes = 0
        stack = LifoQueue()
        visited = []
        stack.put(iState)
        expandedNodes += 1
        while not stack.empty():
            cState = stack.get()
            if cState.puzzle == self.fPuzzle:
                self.printPath(cState)
                print("DFS expanded nodes: {}, generated nodes: {}".format(
                expandedNodes, generatedNodes))
                return 
            if cState.g > 15: continue
            if not self.isInList(cState, visited):
                visited.append(cState)
                generatedNodes += 1
            cRow, cCol = self.indexBTile(cState)
            for i in range(len(directions)):
                child=self.newState(cState,cRow, cCol,i)
                if not self.isInList(child, visited):
                    child.g += 1
                    stack.put(child)
                    expandedNodes += 1
    
    def printPath(self,gState):
        if gState == None:
            return
     
        self.printPath(gState.parent)
        print("g= {}, h={}, f={} ".format(gState.g,gState.h,gState.f))
        print('\n'.join([' '.join(['{:3d}'.format(item) for item in row]) 
                for row in gState.puzzle]))
        print()
    
    def indexBTile(self,cState):
        for i in range(n):
            for j in range(n):
                if cState.puzzle[i][j] == 0:
                    return i, j
                
    def newState(self,cState,cRow, cCol, i):
        nState = copy.deepcopy(cState)
        nState.parent = cState
        nRow = cRow + directions[i][0]
        nCol = cCol + directions[i][1]
        
        if self.isSafe(nRow,nCol):
            nState.puzzle[cRow][cCol], nState.puzzle[nRow][nCol] = nState.puzzle[nRow][nCol], nState.puzzle[cRow][cCol]

        return nState
    
    def isInList(self, node, alist):
        for temp in alist:
            if temp.puzzle == node.puzzle:
                return True
        return False
    
    def isSafe(self,x, y):
        return x >= 0 and x < n and y >= 0 and y < n 
    
    def  isSolvable(self):
        iCount = 0
        arr = [0]*(n*n)
        k = 0
        for i in range(n):
            for j in range(n):
                arr[k] = self.iPuzzle[i][j]
                k+=1
        for i in range(8):
            for j in range(i+1,9):
                if (arr[j] != 0 and arr[i] != 0 and arr[i] > arr[j]): 
                    iCount+=1
        print("Number of inversions= ",iCount)
        return iCount % 2 == 0
    
    def costHamming(self,this, target):
        count = 0
        for i in range(n):
            for j in range(n):
                if this[i][j] != target[i][j]:
                    count += 1
        return count


    def costManhattan(self, this, target):
        count = 0
        this_1d = []
        tgt_1d = []
        for i in range(n):
            for j in range(n):
                this_1d.append(this[i][j])
                tgt_1d.append(target[i][j])
        for x in tgt_1d:
            count += abs(tgt_1d.index(x) - this_1d.index(x))
        return count