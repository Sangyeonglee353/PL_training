from graph import *
from DFSApp import *

class makeGraph:
    def getG01(self):
        dfsA=DFSApp()
        
        g = Graph(False)

        # Create Vertex
        v1 = Vertex("A"); v2 = Vertex("B"); v3 = Vertex("C"); v4 = Vertex("D")
        v5 = Vertex("E"); v6 = Vertex("F"); v7 = Vertex("G"); v8 = Vertex("H")

        # Add Vertex
        g.addVertex(v1); g.addVertex(v2); g.addVertex(v3); g.addVertex(v4)
        g.addVertex(v5); g.addVertex(v6); g.addVertex(v7); g.addVertex(v8)
        # 211124_test
        aList = g.getAdjList()
        dfsA.findCC(aList)

        # Create Edges
        e1 = Edge(v1, v2, 1); e2 = Edge(v1, v3, 1)
        e3 = Edge(v2, v4, 1); e4 = Edge(v3, v4, 1)
        e5 = Edge(v4, v6, 1); e6 = Edge(v3, v5, 1)
        e7 = Edge(v5, v7, 1); e8 = Edge(v5, v8, 1)
        e9 = Edge(v7, v8, 1)

        # Add Edges
        g.addEdge(e1); g.addEdge(e2)
        g.addEdge(e3); g.addEdge(e4)
        # 211124_test -> Check top of the result
        aList = g.getAdjList()
        dfsA.findCC(aList)

        g.addEdge(e5); g.addEdge(e6)
        # 211124_test
        aList = g.getAdjList()
        dfsA.findCC(aList)

        g.addEdge(e7); g.addEdge(e8)

        # 211124_test
        aList = g.getAdjList()
        dfsA.findCC(aList)
        g.addEdge(e9)

        return g

    def getG02(self):
        dfsA = DFSApp()
        g = Graph(True)

        a = Vertex("1")
        b = Vertex("2")
        c = Vertex("3")
        d = Vertex("4")
        e = Vertex("5")
        f = Vertex("6")
        
        g.addVertex(a)
        g.addVertex(b)
        g.addVertex(c)
        g.addVertex(d)
        g.addVertex(e)
        g.addVertex(f)

        e1 = Edge(a, b, 1)
        e2 = Edge(a, c, 1)
        e3 = Edge(b, e, 1)
        e4 = Edge(b, d, 1)
        e5 = Edge(c, d, 1)
        e6 = Edge(d, e, 1)
        e7 = Edge(a, f, 1)
        e8 = Edge(f, e, 1)

        g.addEdge(e1)
        g.addEdge(e2)
        g.addEdge(e3)
        g.addEdge(e4)
        g.addEdge(e5)
        g.addEdge(e6)
        g.addEdge(e7)
        g.addEdge(e8)

        g.printAdjList()
        g.printAdjMatrix()

        dfsA.doTopologicalSort(g)
        #dfsA.dfsTS(g)

        return g