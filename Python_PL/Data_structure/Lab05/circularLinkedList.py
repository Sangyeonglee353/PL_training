from node import* # Import everything from node

# Define CircularLinkedList class for circular linked list
class CircularLinkedList:
    # Inintializer for the circular linked list
    def __init__(self):
        self.head = None

    # To check wheater list is empty
    def isEmpty(self): return self.head == None

    # To clear the list
    def clear(self): self.head = None

    # Define addFront() function for inserting a node at the front of the list
    def addFront(self, data):
        newNode = Node(data) # create a new node
        if self.head is None:
            self.head = newNode
            newNode.next = self.head
            self.head.next = self.head
        else:
            newNode.next = self.head.next
            self.head.next = newNode
        
    # Define addRear() function for inserting a node at the end of the list    
    def addRear(self, data):
        newNode = Node(data)

        if self.head is None:
            self.head = newNode
            newNode.next = self.head
            self.head.next = self.head
        else:
            newNode.next = self.head.next
            self.head.next = newNode
            self.head = newNode

    # Define addAt() function for inserting a node after a given node
    def addAt(self, pos, data):
        if pos == self.getSize():
            self.addRear(data)
            return
        if pos == 0:
            self.addFront(data)
            return

        newNode = Node(data)
        before = self.getNodeAt(pos-1)
        if before is None:
            print("This node doesn't exist in CLL")
            return
        
        newNode.next = before.next
        before.next = newNode

    # To get the node from a node at a particular position
    def getNodeAt(self, pos):
        if(pos < 0 or pos > self.getSize()): return None
        temp = self.head
        if self.head is not None:
            while(True):
                temp = temp.next
                pos -= 1
                if(pos < 0):
                    break
        return temp

    # print every node data
    def printList(self, msg='Circularly Linked List: '): 
        print(msg, end='')
        temp = self.head # Start from head 

        if self.head is not None:
            while(True):
                print(temp, end='->')
                temp = temp.next
                if(temp == self.head):
                    break
        print()

    # String representation ↓
    # it is the same function as printList, and it's just that there's no message.
    def __str__(self):
        temp = self.head
        string_repr = ""
        if self.head is not None:
            while(True):
                string_repr += str(temp) + "->"
                temp = temp.next
                if(temp == self.head):
                    break
        return string_repr

    # To get the list size
    def getSize(self):
        temp = self.head
        count = 0
        if self.head is not None:
            while(True):
                count += 1
                temp = temp.next
                if(temp == self.head):
                    break
        return count

    # Define deleteFront() function for deleting a node at the beginning of the list
    def deleteFront(self):
        if self.isEmpty():
            print("List is Empty..")
            return None
        
        temp = self.head

        if(temp == temp.next):
            self.head = None
            return temp
        else:
            temp = self.head.next
            self.head.next = temp.next
            temp.next = None
            return temp

    # Define deleteRear() function for deleting a node at the end of the list
    def deleteRear(self):
        temp = self.head
        if self.isEmpty():
            print("List is Empty..")
            return None
        
        if(self.head == self.head.next):
            self.head = None
            return temp
        else:
            before = self.getNodeAt(self.getSize()-2) # secondlast point so -2
            self.head = before
            self.head.next = temp.next
            temp.next = None
            return temp

    # Define deleteAt() function for deleting a node after a given index
    def deleteAt(self, pos):
        temp = Node()
        if pos == self.getSize()-1:
            temp = self.deleteRear()
        elif pos == 0:
            temp = self.deleteFront()
        else:
            before = self.getNodeAt(pos-1)
            if before is None:
                print("This node doesn't exist in DLL")
                return

            temp = before.next
            before.next = temp.next
            temp.next = None
        return temp

    # To find the position of node
    def findPos(self, node):
        temp = self.head.next
        pos = 0
        while(True):
            temp = temp.next
            pos += 1
            if(temp.data == node.data or pos > self.getSize()+1):
                break
        return pos%self.getSize()
