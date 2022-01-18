from binarynode import * # import everything from binarynode module
from queue import Queue # import Queue from queue module

# Define BinaryTree class
class BinaryTree: 
    # Initializer
    def __init__(self, root=None):
        self.root = root

    # Set node
    def setRoot(self, node):
        self.root = node
    
    # Get node
    def getRoot(self):
        return self.root

    # Check node is empty 
    def isEmpty(self):
        #return self.root == None
        return self.root is None

    # Clear node
    def clear(self):
        self.root = None

    # Print result of inorder traversal
    def printInOrder(self, msg='      In-Order : '):
        print(msg, end='')
        self.inorder(self.root)
        print('')

    # Algorithm of inorder traversal
    def inorder(self,n):
        if n is not None:
            self.inorder(n.getLeft())
            print(n, end=' ')
            self.inorder(n.getRight())

    # Print result of preorder traversal
    def printPreOrder(self, msg='     Pre-Order : '):
        print(msg, end='')
        self.preorder(self.root)
        print('')

    # Algorithm of preorder traversal
    def preorder(self, n): # depth first search (DFS)
        if n is not None:
            print(n, end=' ')
            self.preorder(n.getLeft())
            self.preorder(n.getRight())

    # Print result of postorder traversal
    def printPostOrder(self, msg='    Post-Order : '):
        print(msg, end='')
        self.postorder(self.root)
        print('')

    # Algorithm of postorder traversal
    def postorder(self, n):
        if n is not None:
            self.postorder(n.getLeft())
            self.postorder(n.getRight())
            print(n, end=' ')

    # Print result of levelorder traversal
    def printLevelOrder(self, msg='   Level-Order : '):
        print(msg, end='')
        self.levelorder(self.root)
        print('')

    # Algorithm of leverorder traversal
    def levelorder(self, n): # Breadth First Search (BFS)
        queue = Queue()
        queue.put(n)
        while not queue.empty():
            n = queue.get()
            if n is not None:
                print(n, end=' ')
                queue.put(n.getLeft())
                queue.put(n.getRight())

    # Calculate height of Node
    def calcHeight(self, n):
        if n is None:
            return -1
        hLeft = self.calcHeight(n.getLeft())
        hRight = self.calcHeight(n.getRight())
        if(hLeft > hRight):
            return hLeft + 1
        else:
            return hRight + 1

    # Calculate number of terminal Node
    def countLeaf(self, n):
        if n is None:
            return 0
        elif self.isLeaf(n):
            return 1
        else:
            #return self.countLeaf(n.left) + self.countLeaf(n.right)
            return self.countLeaf(n.getLeft()) + self.countLeaf(n.getRight())
    
    # Check whether it is a terminal node or not
    def isLeaf(self, n):
        return n.getLeft() is None and n.getRight() is None
    
    # Calculate number of Node
    def countNode(self, n):
        if n is None:
            return 0
        else:
            return 1 + self.countNode(n.getLeft()) + self.countNode(n.getRight())