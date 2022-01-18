from collections import defaultdict

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

    # Deifne dfsTS fucntion
    def dfsTS(self, vertex, adjList, visited, result):
        if not visited[vertex]:
            visited[vertex] = True
            for neighbor in adjList[vertex]:
                self.dfsTS(neighbor, adjList, visited, result) # recursive function
            result.insert(0, vertex)
