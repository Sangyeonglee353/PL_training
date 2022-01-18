from node import * # import everything from node

# Define LinkedStack class for linked stack
class LinkedStack:
    # Initializer for linked stack
    def __init__(self):
        self.head = None
    
    def push(self, data): # == addFront
        new_node = Node(data) # create a new node
        if self.head:
            new_node.next = self.head # link new_node to head
        self.head = new_node # make NewNode as head

    def pop(self): # delete from head == deleteFront
        tmp = self.head
        if self.head:
            self.head = self.head.next
            tmp.next = None
        return tmp

    def __str__(self): # String representation
        tmp = self.head
        string_repr = ""
        while tmp:
            string_repr += str(tmp) + "->"
            tmp = tmp.next
        
        return string_repr + "END"

    # To get the data element from a node at a particular position
    def getDataAt(self, pos): # 해당 위치에 데이터 반환
        node = self.getNodeAt(pos)
        if node == None:
            return None
        else:
            return node.getData()

    # To change/replace the data of a particular node
    def replaceDataAT(self, pos, data):
        node = self.getNodeAt(pos)
        if node != None:
            node.data = data

    # To check wheather the list is empty.
    def isEmpty(self):
        return self.head == None # return True if head is none

    # To clear the list
    def clear(self):
        self.head = None

    # To get the list size
    def getSize(self):
        node = self.head
        count = 0
        while node is not None:
            node = node.getNext()
            count += 1
        return count