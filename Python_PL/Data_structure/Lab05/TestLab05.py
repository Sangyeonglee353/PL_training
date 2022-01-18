from singlylinkedlist import *   # import everything from singlylinkedlist
from LineEditor import *         # import everything from LineEditor
from DoublyLinkedList import *   # import everything from DoublyLinkedList
from polyNomial import *         # import everything from polyNomial
from circularLinkedList import * # import everything from circularLinkedList
from JosephusProblem import *    # import everything from JosephusProblem

# Define testJosephusProblem() function to solve the Josephus Problem
def testJosephusProblem():
    jp = JosephusProblem(10, 3)
    jp.runJosephus()

def testCircularLinkedList():
    list = CircularLinkedList()
    print(list.getSize())
    list.addFront(30)
    list.addFront(15)
    print(list)
    print(list.getSize())
    list.addFront(35)
    list.addFront(20)
    list.addFront(22)
    list.addFront(25)
    list.addFront(50)
    list.addRear(150)
    list.addRear(250)
    print(list)
    print("deleted -> ", list.deleteFront())
    print(list)
    print("deleted -> ", list.deleteRear())
    print(list)
    print("deleted -> ", list.deleteAt(3))
    print(list)
    print("position -> ", list.findPos(list.head.next), list.head.next)
    print("position -> ", list.findPos(list.head), list.head)

# Define testPoly for the testing polyNomial
def testPoly():
    a = SparsePoly()
    b = SparsePoly()
    a.read() # input A node
    b.read() # input B node
    a.display(" A = ") # Print A node
    b.display(" B = ") # Print B node
    c = a.add(b) # Excute A+B
    d = a.sub(b) # Excute A-B
    c.display(" A+B = ") # Print A+B node
    d.display(" A-B = ") # Print A-B node
    c.getDegree() # Print degree of A + B node
    d.getDegree() # Print degree of A - B node

def testDoublyLinkedList():
    list2 = DoublyLinkedList()
    print(list2.getSize())

    list2.addRear(30)
    list2.addRear(35)
    list2.addFront(47)
    print(list2)
    print(list2.getSize())
    list2.addFront(50)
    list2.addRear(40)
    list2.addFront(55)
    list2.addRear(60)
    list2.addAt(3, 70)
    list2.addAt(3, 80)
    print(list2)
    print("deleted -> ", list2.deleteFront())
    print("deleted -> ", list2.deleteRear())
    print("deleted -> ", list2.deleteAt(2))
    print("deleted -> ", list2.deleteAt(2))

    print(list2)

def testSinglyLinkedList():
    list = singlyLinkedList()
    list.addAt(0, 10) # (10)->END
    list.addAt(0, 20) # (20)->(10)->END
    list.addAt(1, 30) # (20)->(30)->(10)->END
    list.addAt(list.getSize(), 40) # (20)->(30)->(10)->(40)->END
    list.addAt(2, 50) # (20)->(30)->(50)->(10)->(40)->END
    list.addFront(23) # (23)->(20)->(30)->(50)->(10)->(40)->END
    list.addRear(25)  # (23)->(20)->(30)->(50)->(10)->(40)->(25)->END
    
    #list.printList("Element in the List : ")
    print(list)
    print(list.getSize())
    print(list.getDataAt(2))
    list.replaceDataAT(2, 90)
    print("List after replcing 2nd element : ", list)
    list.reverseList()
    print("List after reversing : ", list)
    
    print(list.deleteFront())
    print("List after deleting element from front : ", list)
    print(list.deleteRear())
    print("List after deleting element from Rear : ", list)
    print(list.deleteAt(2))
    print("List after deleting 2rd element : ", list)
    print(list.deleteAt(0))
    print("List after deleting 3rd element : ", list)
    list.deleteAt(list.getSize())
    print("List after deleting 3rd element : ", list)
    list.clear()
    print(list)
    
def testNodes():
    # a = Node()
    # b = Node(23, None)
    # c = Node(99, b)
    # d = Node(100, c)
    d = Node(100,None)
    c = Node(99, d)
    b = Node(23,c)
    a = Node(None, b)
    # print(a, b, c.getNext(), c, d, d.getNext())
    # print(a, a.getNext(), b.getNext(), c.getNext())
    print(a, a.getNext(), a.getNext().getNext(), a.getNext().getNext().getNext())
    print(a, a.next, a.next.next, a.next.next.next) # public인 경우 ()를 안써도 가능

# Define main function
def main(): 
    #testNodes()
    #testSinglyLinkedList()
    #le=LineEditor()
    #le.runLineEditor() # Excute Line Editor
    #testDoublyLinkedList()
    #testPoly() # Excute Polynomial test
    #testCircularLinkedList()
    testJosephusProblem() # Excute testJosephusProblem() function

if __name__ == "__main__": # Excute main function if __name__ is __main__
    main()