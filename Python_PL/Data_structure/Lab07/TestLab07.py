from makeGraph import *    # import everything from makeGraph module
from searchGraph import *  # import everything from searchGraph module
from DFSApp import *       # import everything from DFSApp module
from msts import *         # import everything from msts module

# Define testGraph01 function
def testGraph01():
    mg = makeGraph()   # 1.1
    sg = SearchGraph() # 1.2
    dfsA = DFSApp()    # 1.3

    # 1.1 Graph Data Structures by Figure 1
    g1 = mg.getG01()
    print("### Print Figure 1: Graph01 ###\n")
    print(g1)
    g1.printAdjList()
    g1.printAdjMatrix()

    # 1.2 Graph Transversal by Figure 1
    adjList=g1.getAdjList()
    sv=g1.getVertexList()[0] # any number we can get

    sg.dfs(adjList, sv) # order different => result also different
    sg.bfs(adjList, sv)
    print()

    # 1.3 Application of Depth First Search
    # 1.3.1 Connected components by Figure 1
    dfsA.findCC(adjList)
    print()
    # 1.3.2 Topological Sort by Figure 1
    # print("Topological Sort by Figure 1: ")
    # print(dfsA.doTopologicalSort(g1))
    # print()

# Define testGraph02 function
def testGraph02():
    mg = makeGraph()   # 1.1
    sg = SearchGraph() # 1.2
    dfsA = DFSApp()    # 1.3

    # 1.1 Graph Data Structures by Figure 2
    g2 = mg.getG02()
    print("### Print Figure 2: Graph02 ###\n")
    print(g2)
    g2.printAdjList()
    g2.printAdjMatrix()

    # 1.2 Graph Transversal by Figure 2
    adjList=g2.getAdjList()
    sv=g2.getVertexList()[0] # any number we can get

    sg.dfs(adjList, sv) # order different => result also different
    sg.bfs(adjList, sv)
    print()

    # 1.3 Application of Depth First Search
    # 1.3.1 Connected components by Figure 2
    dfsA.findCC(adjList)
    print()
    # 1.3.2 Topological Sort by Figure 2
    print("Topological Sort by Figure 2: ")
    print(dfsA.doTopologicalSort(g2))
    print()

    mst = MST()
    # Print MST through Kruskal's Algorithm by Figure 2 
    T = mst.mstKruskal(g2)
    print("MST through Kruskal's Algorithm by Figure 2")
    print(T)
    print("getOrder: {}".format(T.getOrder()))
    print("getSize: {}".format(T.getSize()))
    print("getWeight: {}".format(T.getWeight()))
    print("getEdgeList: \n{}".format(T.getEdgeList()))
    print()

    # Print MST through Prim's Algorithm by Figure 2
    T2 = mst.runPrim(g2, sv)
    print("MST through Prim's Algorithm by Figure 2")
    print(T2)
    print("getOrder: {}".format(T2.getOrder()))
    print("getSize: {}".format(T2.getSize()))
    print("getWeight: {}".format(T2.getWeight()))
    print("getEdgeList: \n{}".format(T2.getEdgeList()))
    print()

    # Print Dijkstra Algorithm by Figure 2
    print("Dijkstra Algorithm by Figure 2")
    mst.runDijkstra(g2, sv)

# Define testGraph03 function
def testGraph03():
    mg = makeGraph()   # 1.1
    sg = SearchGraph() # 1.2
    dfsA = DFSApp()    # 1.3

    # 1.1 Graph Data Structures by Figure 3
    g3 = mg.getG03()
    print("### Print Figure 3: Graph03 ###\n")
    print(g3)
    g3.printAdjList()
    g3.printAdjMatrix()

    # 1.2 Graph Transversal by Figure 3
    adjList=g3.getAdjList()
    sv=g3.getVertexList()[0] # any number we can get

    sg.dfs(adjList, sv) # order different => result also different
    sg.bfs(adjList, sv)
    print()

    # 1.3 Application of Depth First Search
    # 1.3.1 Connected components by Figure 3
    dfsA.findCC(adjList)
    print()
    # 1.3.2 Topological Sort by Figure 3
    print("Topological Sort by Figure 3: ")
    print(dfsA.doTopologicalSort(g3))
    print()

# Define main() function
def main():
    #testGraph01()
    testGraph02()
    #testGraph03()

    # 1.3.3 N-Queens Problem
    #eq = EightQueens(5)
    #eq.solve()

if __name__ == "__main__": # if this module is the highest module,
    main()                 # Execute main() function