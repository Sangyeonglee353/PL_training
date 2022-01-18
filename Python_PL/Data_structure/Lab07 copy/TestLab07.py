from makeGraph import *
from searchGraph import *
from DFSApp import *

def testTask01():
    # 211124
    sg = SearchGraph()
    dfsA = DFSApp()
    # 211121
    mg = makeGraph()
    g1 = mg.getG01()
    print(g1)
    print("Size of the graph: ", g1.getSize())
    print("List of the Edges: ", g1.getEdgeList())
    # print("Adjacency List: ")
    # adjList = g1.getAdjList()
    # for item, value in adjList:
    #     print("{} : {}".format(item, value))
    g1.printAdjList()
    g1.printAdjMatrix()
    print()
    print(g1.getVertexList())

    # 211124
    adjList=g1.getAdjList()
    sv=g1.getVertexList()[0] # any number we can get

    sg.dfs(adjList, sv) # order different => result also different
    sg.bfs(adjList, sv)

    dfsA.findCC(adjList)
    
    g2 = mg.getG02()

# Define main() function
def main():
    testTask01()

if __name__ == "__main__": # if this module is the highest module,
    main()                 # Excute main() function