from circularLinkedList import * # import everything from circularLinkedList module

# Define JosephusProblem class to solve the Josephus Problem
class JosephusProblem:
    # Initializer for JosephusProblem
    def __init__(self, n = 10, m = 3):
        self.list = CircularLinkedList()
        self.n = n # number
        self.m = m # term
        for i in range(1, n+1):
            self.list.addFront(i)

    # Define runJosephus() function to solve the Josephus Problem
    def runJosephus(self):
        print(self.list)
        temp = self.list.head.next
        count = 0
        while(True):
            temp = temp.next
            count += 1
            
            # Eliminate
            if count == self.m:
                temp2 = temp.next
                pos = self.list.findPos(temp)
                print("Eliminated ->", self.list.deleteAt(pos))
                temp = temp2
                print(self.list)

                count = 0

            # Select
            if(temp == temp.next):
                print("Selected ->", temp)
                break