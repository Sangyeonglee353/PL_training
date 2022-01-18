from graph import *             # import everything from graph module
from disjointSet import *       # import everything from disjointSet module
from queue import PriorityQueue # import PriorityQueue class from queue module

# Define MST class
class MST:
    # Define Kruskal's Algorithm
    def mstKruskal(self, G):
        N = G.getOrder()
        T = Graph(False)
        eList = G.getEdgeList()
        for vtx in G.getVertexList():
            T.addVertex(vtx)
        ds = DisjointSet()
        for vtx in G.getVertexList():
            ds.makeSet(vtx)

        PQ = PriorityQueue()
        for e in G.getEdgeList():
            PQ.put(e)

        while not PQ.empty():
            e = PQ.get()
            x = ds.find(e.getU())
            y = ds.find(e.getV())
            if(x != y):
                T.addEdge(e)
                ds.union(x, y)
        return T
    
    # Define Prim's Algorithm
    def runPrim(self, G, src):
        T = Graph(G.isDirected())
        eList = []

        PQ = PriorityQueue()
        for e in G.getNeighborEdges(src):
            PQ.put(e)
        T.addVertex(src)

        #while not PQ.empty():
        while T.getOrder() != G.getOrder():
            minE = PQ.get()

            vxtV = minE.getV()
            if vxtV in T.getVertexList():
                continue
            T.addVertex(vxtV)
            eList.append(minE)
            for e in G.getNeighborEdges(vxtV):
                PQ.put(e)

        for e in eList:
            T.addEdge(e)

        return T

    # Define printConfiguration function for using runDijkstra function
    def printConfiguration(self, Known, Dv, Pv):
        print("Configuration:")
        for vtx in Known:
            print("{} - {} - {} - {} ".format(vtx, Known[vtx], Dv[vtx], Pv[vtx]))

    # Define Dijkstra Algorithm
    def runDijkstra(self, G,src):
        Known = {}
        Dv = {}
        Pv = {}

        for vtx in G.getVertexList():
            Known[vtx] = False
            Dv[vtx] = float("inf")
            Pv[vtx] = None
        
        Known[src] = True
        Dv[src] = 0.0

        PQ = PriorityQueue()
        PQ.put((0, src))
        edgeDistance = 0.0
        newDistance = 0.0

        while not PQ.empty():
            self.printConfiguration(Known, Dv, Pv)
            emin = PQ.get()[1]
            for e in G.getNeighborEdges(emin):
                edgeDistance = e.getW()
                newDistance = Dv[e.getU()] + edgeDistance
                if(not Known[e.getV()] and Dv[e.getV()] > newDistance):
                    Dv[e.getV()] = newDistance
                    Pv[e.getV()] = e.getU()
                    PQ.put((newDistance, e.getV()))

            Known[e.getU()] = True
