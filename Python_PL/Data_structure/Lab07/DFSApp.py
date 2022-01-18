from collections import defaultdict # import defaulstdict class from collections module

# Define DFSApp class
class DFSApp:
    # Define findCC for connected component
    def findCC(self, adjList):
        visited = set()
        colorList = []

        for vtx in adjList:
            if vtx not in visited:
                color = self.dfsCC(adjList, [], vtx, visited) # recursive function
                colorList.append( color )
        print("\nConnected Components = {}".format(len(colorList)))
        print(colorList)

    # Define dfsCC function
    def dfsCC(self, adjList, color, vertex, visited):
        if vertex not in visited:
            visited.add(vertex)
            color.append(vertex)
            nbr = adjList[vertex]
            for vtx in nbr:
                if vtx not in visited:
                    self.dfsCC(adjList, color, vtx, visited) # recursive function 
        return color

    # Define doTopologicalSort function for directed cycled graph
    def doTopologicalSort(self, g):
        adjList = g.getAdjList()
        visited = defaultdict()
        for vtx in adjList:
            visited[vtx]=False
        result = []
        for vertex in visited:
            self.dfsTS(vertex, adjList, visited, result) # recursive function
        return result

    # Deifne dfsTS fucntion
    def dfsTS(self, vertex, adjList, visited, result):
        if not visited[vertex]:
            visited[vertex] = True
            for neighbor in adjList[vertex]:
                self.dfsTS(neighbor, adjList, visited, result) # recursive function
            result.insert(0, vertex)

class EightQueens: # Defining the EightQueens class
    # Initializer
    def __init__(self, NQ):
        self.NQ = NQ
        self.solutions = 0

    # Solve the problem and print result
    def solve(self):
        board = [-1]*self.NQ
        self.dfsPQ(board, 0)
        print("Found", self.solutions, "solutions.")

    # Define dfsPQ function
    def dfsPQ(self, board, row):
        if row == self.NQ: # if possible solution found
            print(board)
            self.solutions += 1
        else:
            for col in range(self.NQ):
                if not self.isAttack(board, row, col):
                    board[row] = col
                    self.dfsPQ(board, row + 1)

    # Define isAttack function
    def isAttack(self, board, row, col):
        for i in range(row):
            if board[i] == col or \
                board[i] - i == col - row or \
                board[i] + i == col + row:

                return True
        return False