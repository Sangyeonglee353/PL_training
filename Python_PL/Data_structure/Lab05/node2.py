# Define Node2 class for the Doubly Linked List
class Node2:
    # Initializer for the doubly linked list
    def __init__(self, prev=None, data=None, nxt=None):
        self.prev = prev
        self.data = data
        self.next = nxt

    # Override '__str__' function to represent as String
    def __str__(self):
        return str(self.data)

    # Define getNext() function for getting address of next node
    def getNext(self):
        return self.next
    
    # Define getPrev() function for getting address of previous node
    def getPrev(self):
        return self.prev

    # Define getData() function for getting data of node
    def getData(self):
        return self.data

    # Define setData() function for setting data of node to d
    def setData(self, d):
        self.data = d

    # Define setNext() function for setting address of next node to nn
    def setNext(self, nn):
        self.next = nn
        
    # Define setPrev() function for setting address of previous node to nn        
    def setPrev(self, pn):
        self.prev = pn