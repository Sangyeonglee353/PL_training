from binaryTree import * # import everything from binaryTree module

# Define BinarySearchTree class
class BinarySearchTree(BinaryTree):
    # Initializer
    def __init__(self):
        super().__init__()

    # Print result of search
    def search_bst(self, key):
        n = self.search(self.getRoot(), key)
        if n is not None:
            print(" Data found --> " + str(n.data))
        else:
            print(" Not found --> " + str(key))

    # Algorithm of BST search operation(recursive function)
    def search(self, n, key):
        if n is None : return None
        elif key == n.getData(): return n
        elif key < n.getData(): return self.search(n.getLeft(), key)
        else: return self.search(n.getRight(), key)

    # Algorithm of insert operation
    def insert_bst(self, key):
        n = Node(key, None, None)
        if super().isEmpty():
            self.root = n
        else:
            self.insert(self.root, n)

    # Algorithm of BST insert operation(recursive structure)
    def insert(self, r, n):
        if n < r:                    # If the node to insert is smaller than root
            if r.getLeft() is None:  # And if left child of root is empty
                r.setLeft(n)         # n becomes the left child of the root.
                return True
            else:                    # If not empty,
                return self.insert(r.getLeft(), n) # Insert it into left child.
        elif n > r:                  # If the node to insert is bigger than root
            if r.getRight() is None: # And if right child of root is empty
                r.setRight(n)        # n becomes the right child of the root.
                return True
            else:                    # If not empty,
                return self.insert(r.getRight(), n) # Insert it into your right child.
        else: # if the value overlaps,
            return False # Don't insert

    # Search maximum node
    def search_max_bst(self, n):
        while n is not None and n.right is not None:
            n = n.right
        return n

    # Search minimum node
    def search_min_bst(self, n):
        while n is not None and n.left is not None:
            n = n.left
        return n

    # Algorithm of BST Delete operation
    def delete_bst(self, key):
        if not super().isEmpty():
            parent = None
            node = self.root
            while node is not None and node.getData() != key:
                parent = node
                if key < node.data:node = node.left
                else: node = node.right
            
            if node is None : return None

        # case 1: -> Delete Terminal node 
            if node.left is None and node.right is None:
                self.delete_bst_case1(parent, node)
        
        # case 2: -> Delete One child node
            elif node.left is None or node.right is None:
                self.delete_bst_case2(parent, node)
        
        # case 3: -> Delete Two child node
            else:
                self.delete_bst_case3(node)

    # Algorithm of Delete BST case 1
    def delete_bst_case1(self, parent, node):
        if parent is None:          # if Node is terminal node
            return None             # Become empty tree
        else:
            if parent.left == node: # if the node to delete is left child node of parent 
                parent.left = None  # left child node is none.
            else:                   # if it is right child node of parent,
                parent.right = None # right child node is none.

    # Algorithm of Delete BST case 2
    def delete_bst_case2(self, parent, node):
        if node.left is not None:   # if the node only have left child node
            child = node.left       # child is left child of node.
        else:                       # if the node only have right child node
            child = node.right      # child is right child of node.

        if node == self.root:       # if the node to delete is root node,
            self.root = child       # Become child is new root node
        else:
            if node is parent.left: # if node is left child node of parent,
                parent.left = child # Change the parent's link to the left.

            else:                    # if node is right child node of parent,                        
                parent.right = child # Change the parent's link to the right.

    # Algorithm of Delete BST case 3
    def delete_bst_case3(self, node):
        succp = node                # The parent node of the successor.
        succ = node.right           # Successor node
        while(succ.left is not None): # Search succp & succ
            succp = succ
            succ = succ.left

        if(succp.left == succ):      # if successor is left child,
            succp.left = succ.right  # Connecting the successor's right child.
        else:                        # if succsssor is right child,
            succp.right = succ.right # Connecting the successor's left child.
        
        node.setData(succ.getData())
        node = succ