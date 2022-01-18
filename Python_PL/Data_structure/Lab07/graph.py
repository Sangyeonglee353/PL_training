from collections import OrderedDict # import OrderedDict class from collections module

# Deifne Graph class
class Graph:
    # initializer
    def __init__(self, directed=False, gdict=None):
        if gdict is None:
            gdict={}
        self.gdict=gdict
        self.directed=directed
        self.keyIndex={}

    # Print Vertex
    def __str__(self):
        gs=""
        for vtx in self.gdict:
            gs+="{} : {}\n".format(vtx, self.gdict[vtx])
        return gs

    # Print Vertex, different
    def __repr__(self):
        gs=""
        for vtx in self.gdict:
            gs+="{} : {}\n".format(vtx, self.gdict[vtx])
        return gs

    # Define add Vertex function for insert Vertex
    def addVertex(self, vtx):
        if vtx in self.gdict.keys(): # Check already in graph, Because it don't duplicate
            print("Node is already in the graph")
        else: # not in gdict, So add list
            self.gdict[vtx] = []
            self.keyIndex[vtx] = len(self.keyIndex) + 1  # Increase keyIndex number

    # Define add Edge function for insert Edge
    def addEdge(self, e): 
        if e.getU() in self.gdict: 
            self.gdict[e.getU()].append(e)
        
        if (not self.directed): # if undirected graph
            e2=Edge(e.getV(), e.getU(), e.getW())
            self.gdict[e2.getU()].append(e2)
        else: # if directed graph
            #print("Vertex not found")
            pass

    # Get size
    def getSize(self):
        size = len(self.getEdgeList())
        if not self.isDirected(): # for undirected graph
            size //=2
        return size

    # Get EdgeList
    def getEdgeList(self):
        eList = []
        for vtx in self.gdict:
            for e in self.gdict[vtx]:
                eList.append(e)
        
        return eList

    # Get directed
    def isDirected(self):
        return self.directed

    # Get Order, number of keys
    def getOrder(self):
        return len(self.gdict.keys())

    # Get neigbor Edges -> Different thing neighbor node
    def getNeighborEdges(self, vtx):
        return self.gdict[vtx]

    # Get neighbor Vertices
    def getNeighborVertices(self, vtx):
        elist=self.gdict.get(vtx) # U
        vlist=[]
        for e in elist:
            vlist.append(e.getV()) # V
        return vlist

    # Get Adjacency List
    def getAdjList(self):
        adjList = {}
        for vtx in self.gdict:
            adjList[vtx]=set(self.getNeighborVertices(vtx)) # We got Vertetics, not Edge
        return adjList

    # Print Adjacency List
    def printAdjList(self):
        print("\n Adjacency List: ")
        adjList = self.getAdjList()
        for vtx in adjList:
            print("{} : {}".format(vtx, adjList[vtx]))

    # Get Adjacency Matrix
    def getAdjMatrix(self):
        adjMatix = [[0 for x in range(len(self.keyIndex))] for y in range(len(self.keyIndex))]

        for e in self.getEdgeList():
            adjMatix[self.keyIndex[e.getU()]-1][self.keyIndex[e.getV()]-1]=e.getW()
        return adjMatix

    # Print Adjacency Matrix
    def printAdjMatrix(self):
        print("\n Adjacency Matrix: ")
        adjMatix=self.getAdjMatrix()
        for i in range(0, len(self.keyIndex)):
            print()
            for j in range(0, len(self.keyIndex)):
                print(" {0:>2d} ".format(adjMatix[i][j]), end ="")
    
    # Get Weight
    def getWeight(self):
        w=0
        for e in self.getEdgeList():
            w += e.getW()

        if not self.isDirected():
            w = w//2
        return w
    
    # Get Degree
    def getDegree(self, w):
        return self.getOutDegree(vtx) + self.getInDegree(vtx)

    # Get OutDegree
    def getOutDegree(self):
        return len(self.gdict[vtx])
    
    # Get InDegree
    def getIndegree(self):
        return len(self.getInwardEdges(vtx))

    # Get Inwadrd Edges
    def getInwardEdges(self, vtx):
        elist=[]
        for e in self.getEdgeList():
            if vtx == e.getV():
                elist.append(e)
        return elist

    # Get Vertex List
    def getVertexList(self):
        dict1 = OrderedDict(sorted(self.keyIndex.items()))
        return list(dict1.keys())

# Define Vertex class 
class Vertex:
    # Initerializer
    def __init__(self, key=None):
        self.key = key

    # Overider __str__ function
    def __str__(self):
        return "{}".format(self.key)

    # Overider __repr__ function
    def __repr__(self):
        return "{}".format(self.key)

    # Override for right hand side
    def __eq__(self, rhs): return self.key == rhs.key
    def __ne__(self, rhs): return self.key != rhs.key
    def __lt__(self, rhs): return self.key < rhs.key
    def __le__(self, rhs): return self.key <= rhs.key
    def __gt__(self, rhs): return self.key > rhs.key
    def __ge__(self, rhs): return self.key >= rhs.key

    # hash function: output unique key from various input 
    # 다양한 입력을 유일한 값으로 반환해줌
    def __hash__(self): return hash(self.key)

    # Set key
    def setKey(self, key): self.key = key
    
    # Get key
    def getKey(self): return self.key

# Create Edge variable
class Edge:
    # Initerializer
    def __init__(self, u=None, v=None, w=None):
        self.u=u
        self.v=v
        self.w=w

    # Override for right hand side
    def __eq__(self, rhs): return self.w == rhs.w
    def __ne__(self, rhs): return self.w != rhs.w
    def __lt__(self, rhs): return self.w < rhs.w
    def __le__(self, rhs): return self.w <= rhs.w
    def __gt__(self, rhs): return self.w > rhs.w
    def __ge__(self, rhs): return self.w >= rhs.w

    # hash function: output unique key from various input 
    # 다양한 입력을 유일한 값으로 반환해줌
    def __hash__(self): return hash(self.w)

    # Override __str__ function
    def __str__(self):
        return "{} -> {} ({})".format(self.u, self.v, self.w)
    
    # Override __repr__ function
    def __repr__(self):
        return "{} -> {} ({})".format(self.u, self.v, self.w)

    # Set data
    def setU(self, u): self.u = u
    def setV(self, v): self.v = v
    def setW(self, w): self.w = w

    # Get data
    def getU(self): return self.u
    def getV(self): return self.v
    def getW(self): return self.w