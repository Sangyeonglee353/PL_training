from node import * # import everything from node module

# Define singlyLinkedList for the linked list
class singlyLinkedList:
    # Initializer for the singly linked list
    def __init__(self):
        self.head = None
    
    # Define addFront() function for inserting a node at the front of the list
    def addFront(self, data):
        new_node = Node(data) # create a new node
        if self.head:
            new_node.next = self.head # link new_node to head
        self.head = new_node # make NewNode as head

    # Define addAt() function for inserting a node after a given node
    def addAt(self, pos, data): # = insert
        before = self.getNodeAt(pos-1)
        if before == None : # if it is the first Node
            self.head = Node(data, self.head) # Create NewNode at the front of the list
        else: # if it is not the first Node
            node = Node(data, before.next) # Create NewNode at the middle of the list
            before.next = node # Modify the before link

    # To get the node from a node at a particular position
    def getNodeAt(self, pos):           
        if pos < 0: return None         # if the position is outside the scope of the list
        node = self.head                # Node starts with head
        while pos > 0 and node != None: # Repeat pos times
            node = node.next            # Move the node to the next node
            pos -= 1                    # Reduce the number of repetitions left
        return node                     # Return the final node

    # Define addRear() function for inserting a node at the end of the list
    def addRear(self, data):
        if self.head is None:
            self.addFront(data) # if this is first node, call insert_head
        else:
            temp = self.head
            while temp.next: # traverse to last node
                temp = temp.next
            temp.next = Node(data) # create node & link to tail

    # Define deleteFront() function for deleting a node at the beginning of the list
    def deleteFront(self):
        tmp = self.head
        if self.head:
            self.head = self.head.next # change the head to next head
            tmp.next = None
        return tmp # Return the Deleting node

    # Define deleteRear() function for deleting a node at the end of the list
    def deleteRear(self):
        tmp = self.head
        if self.head:
            if self.head.next is None: # if it is Rear,
                self.head = None # Delete head
            else: # if it is not Rear,
                # Move to the Rear - 1 position
                while tmp.next.next:
                    tmp = tmp.next 
                
                # After while(), Set the second_last to the Rear
                second_last = tmp 
                tmp = tmp.next
                second_last.next = None
        return tmp # Return the Deleting node

    # Define deleteAt() function for deleting a node after a given index
    def deleteAt(self, pos):
        tmp = Node() # Create Node
        if(self.isEmpty()) or (pos > self.getSize()): # if list is empty or position is over the size of list,
            tmp = None
        elif pos == 0: # if position is the Front,
            tmp = self.deleteFront()
        elif pos == self.getSize(): # if position is the End(Rear),
            tmp = self.deleteRear()
        else: # if position is the middle,
            prev = self.getNodeAt(pos -1) # Find the before node
            tmp = prev.next # Store deleting node
            prev.next = tmp.next # Modify link(address of node)
            tmp.next = None
        return tmp # Return the Deleting node

    # Print every node data
    def printList(self, msg = 'Singly Linked List: '): 
        print(msg, end = '')
        tmp = self.head # Start from head 
        while tmp: # Print each of data of node
            print(tmp.data, end='->')
            tmp = tmp.next

        return('END') # Print 'END' at last time 

    # String representation ↓
    # it is the same function as printList, and it's just that there's no message.
    def __str__(self): 
        tmp = self.head
        string_repr = ""
        while tmp:
            string_repr += str(tmp) + "->"
            tmp = tmp.next
        
        return string_repr + "END"

    # To get the data element from a node at a particular position
    def getDataAt(self, pos): 
        node = self.getNodeAt(pos) # To get the node
        if node == None:
            return None
        else:
            return node.getData() # Return the data of Node

    # To change/replace the data of a particular node
    def replaceDataAT(self, pos, data):
        node = self.getNodeAt(pos) # To get the node
        if node != None: # if node is not None
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
        return count # Return the count(size of list)

    # To reverse the list
    def reverseList(self):
        prev = None
        tmp = self.head

        while tmp:
            next_node = tmp.next # Store the current node's next node.
            tmp.next = prev # Make the current node's next point backwards
            prev = tmp # Make the previous node be the current node
            tmp = next_node # Make the current node the next node(to progress interation)

        self.head = prev # Return prev in order to put the head at the end

    # To find the Data(value)
    def findData(self, val): 
        node = self.head
        while node is not None: # Exploring all nodes
            if node.data == val : return node #  Return the node if find the data
            node = node.next
        return node # Return None if not find

    # Print Line number and node
    def printByLine(self): 
        print("Line Editor")
        node = self.head
        line = 0
        while node is not None:
            print("{} = {}".format(line, node)) # # print line number, 
            #print('[%2d] '%line, end='') # print line number, format과는 또 다른 형태
            #print(node)
            node = node.next
            line += 1
        print()