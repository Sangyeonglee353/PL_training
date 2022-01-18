# Define MinHeap class
class MinHeap:
    # Initializer
    def __init__(self):
        self.heap = []
        self.heap.append(0)
    
    # Get Parent node
    def getParent(self, i): return self.heap[i//2]

    # Get Left node
    def getLeft(self, i): return self.heap[i*2]

    # Get Right node
    def getRight(self, i): return self.heap[i*2+1]

    # Get Size
    def getSize(self): return len(self.heap) - 1

    # Check wheather Heap is empty or not
    def isEmpty(self): return self.getSize() == 0
    
    # Override __str__ function
    def __str__(self):
        return str(self.heap)

    # Define Heap insert opeartion
    def insert(self, n):
        self.heap.append(n) # Insert it to the last node.
        i = self.getSize()  # Location of node n.
        while(i != 1 and n < self.getParent(i)): # While I'm smaller than my parents, 
                                                 # I keep going up heap
            self.heap[i] = self.getParent(i) # Bringing down parents.
            i = i//2                         # Raise i to the parent's index.
        self.heap[i] = n                     # Insert n in the last position.

    # Define Heap delete operation
    def delete(self):
        parent = 1
        child = 2
        if not self.isEmpty():
            hroot = self.heap[1] # Copy the root you want to delete.
            last = self.heap[self.getSize()] # Last node
            while(child <= self.getSize()):  # Before Last node
                # If the left node is larger, increase the child by 1 (default is the right node).
                if child<self.getSize() and self.getLeft(parent)>self.getRight(parent):
                    child += 1
                if last <= self.heap[child]: # if the smaller child is bigger than last node,
                    break                            # Find insert location, down-heap end.
                self.heap[parent] = self.heap[child] # Or keep going down heap.
                parent = child
                child *= 2

            self.heap[parent] = last # Copy the last node to the parent location
            self.heap.pop(-1)        # Delete the last node.
            return hroot             # Return the root you saved.
    
    # Print Heap
    def printHeap(self):
        level = 1
        for i in range(1, self.getSize()+1):
            if i == level:
                print('')
                level *= 2
            print(str(self.heap[i]), end =' ')
        print("\n----------------")

    

                        
