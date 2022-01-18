from node2 import * # import everything from node2 module

# Define DoublyLinkedList class for the linked list
class DoublyLinkedList:
    # Initializer for the doubly linked list
    def __init__(self):
        self.head = None

    # String representation
    def __str__(self): 
        temp = self.head
        string_repr = ""
        while temp:
            string_repr += str(temp) + "->"
            temp = temp.next

        return string_repr + "END"

    # Basically the same the __str__ function. 
    # It just added a message.
    def printList(self, msg='Doubly Linked List:'):
        print(msg, end ='')
        tmp = self.head
        while tmp:
            print(tmp, end='->')
            tmp = tmp.next
        print('END')

    # To check wheather the list is empty.
    def isEmpty(self):
        return self.head == None

    # To clear the list
    def clear(self):
        self.head = None

    # Define addFront() function for inserting a node at the front of the list
    def addFront(self, data):
        newNode = Node2(None, data, None) # create a new node
        if self.head is None:
            self.head = newNode # assign node
        else:
            newNode.next = self.head # link new_node to head
            if self.head is not None:
                self.head.prev = newNode # link before previous head as newNode

            self.head = newNode # make NewNode as head

    # Define addRear() function for inserting a node at the end of the list
    def addRear(self, data):
        newNode = Node2(None, data, None) # create a new node
        if self.head is None:
            self.head = newNode
            return
        temp = self.head
        while(temp.next is not None):
            temp = temp.next
        temp.next = newNode
        newNode.prev = temp

    # Define addAt() function for inserting a node after a given node
    def addAt(self, pos, data): # = insert
        if pos == self.getSize(): # if position is the last Node
            self.addRear(data)
            return
        if pos == 0: # if position is the first Node
            self.addFront(data)
            return
        
        # if position is the middle node
        newNode = Node2(None, data, None) # Create NewNode
        before = self.getNodeAt(pos-1) # Find the before node
        if before is None:
            print("This node doesn't exist in DLL")
            return
        
        # if before is not None
        # Set the pointer
        newNode.next = before.next
        before.next = newNode
        newNode.prev = before
        if newNode.next is not None:
            newNode.next.prev = newNode # Modify previous address of next node as newNode

    # To get the node from a node at a particular position
    def getNodeAt(self, pos): 
        if (pos < 0 or pos > self.getSize()): # if the position is outside the scope of the list
            print("Invalid position")
            return None
        temp = self.head                # Node starts with head
        while pos > 0 and temp != None: # Repeat pos times
            temp = temp.next            # Move the node to the next node
            pos -= 1                    # Reduce the number of repetitions left
        return temp                     # Return the final node

    # To get the list size
    def getSize(self):
        node = self.head
        count = 0
        while node is not None:
            node = node.next
            count += 1
        return count # Return the count(size of list)

    # To get the data element from a node at a particular position
    def getDataAt(self, pos):
        node = self.getNodeAt(pos)
        if node == None:
            return None
        else:
            return node.data

    # To change/replace the data of a particular node
    def replaceDataAT(self, pos, data):
        node = self.getNodeAt(pos)
        if node != None:
            node.data = data

    # Define deleteFront() function for deleting a node at the beginning of the list
    def deleteFront(self):
        if self.isEmpty():
            print("List is Empty..")
            return None
        
        temp = self.head
        if(temp.next == temp.prev):
            self.head = None
            return temp # Return the Deleting node
        else:
            self.head=temp.next
            self.head.prev=None
            return temp # Return the Deleting node

    # Define deleteRear() function for deleting a node at the end of the list
    def deleteRear(self):
        if self.isEmpty():
            print("List is Empty..")
            return None
        
        temp = self.head
        if(temp.next == temp.prev):
            self.head=None
            return temp # Return the Deleting node
        else:
            while temp.next:
                temp = temp.next

            #second_Last = temp
            temp.prev.next = None
            temp.prev = None
            return temp # Return the Deleting node

    # Define deleteAt() function for deleting a node after a given index
    def deleteAt(self, pos):
        temp = Node2()
        if pos == self.getSize(): # if position is the End(Rear),
            temp=self.deleteRear()
        elif pos == 0: # if position is the Front,
            temp = self.deleteFront()
        else: # if position is the middle,
            before = self.getNodeAt(pos-1)
            if before is None:
                print("This node doesn't exist in DLL")
                return

            # if before is not None
            # Set the pointer
            temp = before.next
            before.next = temp.next
            temp.next.prev = before
            temp.next = None
            temp.prev = None
        return temp # Return the Deleting node