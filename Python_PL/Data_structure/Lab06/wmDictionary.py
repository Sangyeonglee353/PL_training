from bstTree import * # import everything from bstTree module

# Define Record class
class Record:
    # Initializer
    def __init__(self, word, meaning):
        self.word = word
        self.meaning = meaning

    # Override specific function 
    def __eq__(self, rhs): return self.word == rhs.word
    def __ne__(self, rhs): return self.word != rhs.word
    def __lt__(self, rhs): return self.word < rhs.word
    def __gt__(self, rhs): return self.word > rhs.word

    # Override __str__ function
    def __str__(self):
        return "{}:{}".format(str(self.word), str(self.meaning))

# Define Dictinary class
class Dictionary(BinarySearchTree):
    # Initalizer
    def __init__(self):
        super().__init__()

    # Define runDict() function
    def runDict(self):
        wdict = Dictionary()

        # Set Dictionary Main menu operation 
        while True:
            command = input("i-insert, d-delete, p-print, s-search, m-serch meaning, q-quit -> ")
            # 1. insert
            if command == 'i':
                word    = input("    > word: ").strip()
                meaning = input("    > meaning: ").strip()
                wdict.insert_bst(Record(word, meaning))
            # 2. delete
            elif command == 'd':
                word    = input(" Inter word: ")
                wdict.delete_bst(Record(word, None))
            # 3. print
            elif command == 'p':
                print(" Dictionary :")
                wdict.inorder(wdict.root)
                print('\n')
            # 4. search
            elif command == 's':
                word    = input("    > word: ").strip()
                n = wdict.search(wdict.root, Record(word, None))
                if n is not None:
                    print('Record is -->> ', n)
                else:
                    print('The: ' + word + ' is not found')
            # 5. quit
            elif command == 'q' : return

    