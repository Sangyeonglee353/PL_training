class Node: # Define Node class
    # Initializer
    def __init__(self, data = None, left = None, right = None):
        self.data = data
        self.left = left
        self.right = right

    # # Overridie __str__ function
    # def __str__(self):
    #     return '(' + str(self.data) + ')'
    #     #return str(self.data)

    # # Set left node
    # def setLeft(self, node):
    #     self.left = node

    # # Set right node
    # def setRight(self, node):
    #     self.right = node

    # # Get left node
    # def getLeft(self):
    #     return self.left

    # # Get right node
    # def getRight(self):
    #     return self.right
    
    # # Set data
    # def setData(self, data):
    #     self.data = data

    # # Get data
    # def getData(self):
    #     return self.data

    # Get Left, Right, Data
    def getLeft(self): return self.left
    def getRight(self): return self.right
    def getData(self): return self.data

    # Override __str__ function
    def __str__(self): return str(self.data)

    # Set Left, Right, Data
    def setLeft(self, node): self.left = node
    def setRight(self, node): self.right = node
    def setData(self, data): self.data = data

    # Override specific function
    def __eq__(self, rhs): return self.data == rhs.data
    def __ne__(self, rhs): return self.data != rhs.data
    def __lt__(self, rhs): return self.data < rhs.data
    def __gt__(self, rhs): return self.data > rhs.data