from graph import *  # import everything from graph module
from DFSApp import * # import everything from DFSApp module

# Define makeGraph class
class makeGraph:
    # Write Code Figure 1: Graph01
    def getG01(self):
        # Create Graph(undirected)
        g = Graph(False)

        # Create Vertex
        v1 = Vertex("A"); v2 = Vertex("B"); v3 = Vertex("C"); v4 = Vertex("D")
        v5 = Vertex("E"); v6 = Vertex("F"); v7 = Vertex("G"); v8 = Vertex("H")

        # Add Vertex
        g.addVertex(v1); g.addVertex(v2); g.addVertex(v3); g.addVertex(v4)
        g.addVertex(v5); g.addVertex(v6); g.addVertex(v7); g.addVertex(v8)

        # Create Edges
        e1 = Edge(v1, v2, 1); e2 = Edge(v1, v3, 1)
        e3 = Edge(v2, v4, 1); e4 = Edge(v3, v4, 1)
        e5 = Edge(v4, v6, 1); e6 = Edge(v3, v5, 1)
        e7 = Edge(v5, v7, 1); e8 = Edge(v5, v8, 1)
        e9 = Edge(v7, v8, 1)

        # Add Edges
        g.addEdge(e1); g.addEdge(e2)
        g.addEdge(e3); g.addEdge(e4)
        g.addEdge(e5); g.addEdge(e6)
        g.addEdge(e7); g.addEdge(e8)
        g.addEdge(e9)

        return g

    # Write Code Figure 2: Graph02
    def getG02(self):
        # Create Graph(undirected)
        g = Graph(False)

        # Create Vertex
        v1 = Vertex("v1"); v2 = Vertex("v2"); v3 = Vertex("v3"); v4 = Vertex("v4")
        v5 = Vertex("v5"); v6 = Vertex("v6"); v7 = Vertex("v7")

        # Add Vertex
        g.addVertex(v1); g.addVertex(v2); g.addVertex(v3); g.addVertex(v4)
        g.addVertex(v5); g.addVertex(v6); g.addVertex(v7)

        # Create Edges
        e1 = Edge(v1, v2, 2); e2 = Edge(v1, v4, 1)
        e3 = Edge(v1, v3, 4); e4 = Edge(v2, v4, 3)
        e5 = Edge(v2, v5, 10); e6 = Edge(v3, v4, 2)
        e7 = Edge(v3, v6, 5); e8 = Edge(v4, v5, 7)
        e9 = Edge(v4, v6, 8); e10 = Edge(v4, v7, 4)
        e11 = Edge(v5, v7, 6); e12 = Edge(v6, v7, 1)

        # Add Edges
        g.addEdge(e1); g.addEdge(e2)
        g.addEdge(e3); g.addEdge(e4)
        g.addEdge(e5); g.addEdge(e6)
        g.addEdge(e7); g.addEdge(e8)
        g.addEdge(e9); g.addEdge(e10)
        g.addEdge(e11); g.addEdge(e12)

        return g

    # Write Code Figure 3: Graph03
    def getG03(self):
        # Create Graph(directed)
        g = Graph(True)

        # Create Vertex
        v1 = Vertex("v1"); v2 = Vertex("v2"); v3 = Vertex("v3"); v4 = Vertex("v4")
        v5 = Vertex("v5"); v6 = Vertex("v6"); v7 = Vertex("v7")

        # Add Vertex
        g.addVertex(v1); g.addVertex(v2); g.addVertex(v3); g.addVertex(v4)
        g.addVertex(v5); g.addVertex(v6); g.addVertex(v7)

        # Create Edges
        e1 = Edge(v1, v2, 4); e2 = Edge(v1, v6, 10)
        e3 = Edge(v2, v1, 3); e4 = Edge(v2, v4, 18)
        e5 = Edge(v3, v2, 6); e6 = Edge(v4, v2, 5)
        e7 = Edge(v4, v3, 15); e8 = Edge(v4, v5, 2)
        e9 = Edge(v4, v6, 19); e10 = Edge(v4, v7, 5)
        e11 = Edge(v5, v3, 12); e12 = Edge(v5, v4, 1)
        e13 = Edge(v6, v7, 10); e14 = Edge(v7, v4, 8)

        # Add Edges
        g.addEdge(e1); g.addEdge(e2)
        g.addEdge(e3); g.addEdge(e4)
        g.addEdge(e5); g.addEdge(e6)
        g.addEdge(e7); g.addEdge(e8)
        g.addEdge(e9); g.addEdge(e10)
        g.addEdge(e11); g.addEdge(e12)
        g.addEdge(e13); g.addEdge(e14)

        return g