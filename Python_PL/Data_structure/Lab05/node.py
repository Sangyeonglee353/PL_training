# Defining Node class for the linked list.
class Node:
    # Initializer for the linked list.
    def __init__(self, data=None, nxt=None):
        # node is composed data and link.
        self.data = data # Define and initialize data member.
        self.next = nxt # Meaning of next is link, link stores address of others node.

    # Override '__str__' function to represent as (data)
    def __str__(self):
        return "(" + str(self.data) + ")"

    # Define getNext() function for getting address of next node
    def getNext(self):
         return self.next

    # Define getData() function for getting data of node
    def getData(self):
        return self.data   

    # Define setNext() function for setting address of next node to n
    def setNext(self, n): # n = node
        self.next = n # change the link of node

    # Define setData() function for setting data of node to d
    def setData(self, d): # d = data
        self.data = d # change the data of node