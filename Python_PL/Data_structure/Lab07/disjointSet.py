
# Define DisjointSet class
class DisjointSet:
    # initializer
    def __init__(self):
        self.parent = dict()
        self.rank = dict()

    # Define makeSet function
    def makeSet(self, vtx):
        self.parent[vtx] = vtx
        self.rank[vtx] = 0

    # Define find function
    def find(self, vtx):
        if self.parent[vtx] != vtx:
            self.parent[vtx] = self.find(self.parent[vtx])
        return self.parent[vtx]

    # Define untion function 
    def union(self, vtx1, vtx2):
        root1 = self.find(vtx1)
        root2 = self.find(vtx2)
        if root1 != root2:
            if self.rank[root1] > self.rank[root2]:
                self.parent[root2] = root1
            else:
                self.parent[root1] = root2
                if self.rank[root1] == self.rank[root2]:
                    self.rank[root2] += 1