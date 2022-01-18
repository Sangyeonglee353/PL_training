from binarynode import * # import everything from binarynode module
from queue import Queue # import Queue from queue
from queue import LifoQueue # import LifoQueue from queue
from morsecodes import * # import everthing from morsecodes module
from binaryTree import * # import everything from binaryTree module
from expressionTree import * # import everything from expressionTree module
from bstTree import * # import everything from bstTree module
from wmDictionary import * # import everything from wmDictionary module
from minheap import * # import everything from minheap module
from Huffmancodes import * # import everything from Huffmancodes module

# Define testHuffman() function
def testHuffman():
    #with open ('License.txt') as txt_file:
    #    text = txt_file.read()
    text = "asdfdqeroadfkasdfljyisfg()erlr@4^@)_"

    hc = Huffman(text)
    freq = hc.makeFrequencyDict()
    for key in freq:
        print("{} : {}".format(key, freq[key]))
    hc.printCodes()

# Define testMinHeap() function
def testMinHeap():
    print("\n Heap Test")

    heap = MinHeap()
    data = [2, 5, 4, 8, 9, 3, 7, 3]
    print("Data elements : " + str(data))

    for elem in data:
        heap.insert(elem)
    heap.printHeap()
    print(heap)

    heap.delete()
    heap.printHeap()
    print(heap)

    heap.delete()
    heap.printHeap()
    print(heap)

# Define testWMDic() function
def testWMDic():
    wmd = Dictionary()
    wmd.runDict()

# Define testBinartSearchTree() function
def testBinarySearchTree():
    tree = BinarySearchTree()
    data = [35, 18, 7, 26, 12, 3, 68, 22, 30, 99]

    print("Tree for data " + str(data))
    for i in data:
        tree.insert_bst(i)
        tree.printInOrder()
        
    tree.printPreOrder()
    tree.printPostOrder()
    tree.printLevelOrder()
    print(" Nodes = %d" % tree.countNode(tree.root))
    print(" Leaf Nodes = %d" % tree.countLeaf(tree.root))
    print(" Height = %d" % tree.calcHeight(tree.root))
    print(" Maximum = %d" % tree.search_max_bst(tree.root).data)
    print(" Minimum = %d" % tree.search_min_bst(tree.root).data)

    tree.search_bst(26)
    tree.search_bst(25)

    tree.printLevelOrder(" original: LevelOrder: ")
    tree.delete_bst(3)
    tree.printLevelOrder("    case1: < 3> : LevelOrder: ")
    tree.delete_bst(68)
    tree.printLevelOrder("    case2: <68> : LevelOrder: ")
    tree.delete_bst(18)
    tree.printLevelOrder("    case3: <18> : LevelOrder: ")
    tree.delete_bst(35)
    tree.printLevelOrder("    case3: <35> root: LevelOrder: ")

    print(" Nodes = %d" % tree.countNode(tree.root))
    print(" Leaf Nodes = %d" % tree.countLeaf(tree.root))
    print(" Height = %d" % tree.calcHeight(tree.root))
    print(" Maximum = %d" % tree.search_max_bst(tree.root).data)
    print(" Minimum = %d" % tree.search_min_bst(tree.root).data)


def testET():
    et = ExpressionTree()
    postfix = "ab+ef*g*-"
    tnode = et.constructTree(postfix)
    print('\n Inorder (infix)')
    et.inorder(tnode)
    print('\n preorder (prefix)')
    et.preorder(tnode)
    print('\n postorder (postfix)')
    et.postorder(tnode)
    
    # pf = '359++2'
    # tn = et.constructTree(pf)

    # print('\n Inorder (infix)')
    # et.inorder(tn)
    # print('\n predorder (prefix)')
    # et.preorder(tn)
    # print('\n postorder (postfix)')
    # et.postorder(tn)
    # et.setRoot(tn)

def testBST():
    bst = BinarySearchTree()
    data = [35, 18, 7, 26, 12, 3, 68, 22, 30, 99]
    for i in data:
        bst.insert_BST(i)

    bst.printInOrder()
    bst.printPreOrder()
    bst.printPostOrder()
    bst.printLevelOrder()
    print("Tree Height : ", bst.calc_height(bst.getRoot()))
    print("Leaf count : ", bst.count_leaf(bst.getRoot()))
    print("Size of the Tree : ", bst.count_node(bst.getRoot()))
    bst.search_BST(26)
    bst.search_BST(25)

    bst.delete_BST(3)
    bst.printLevelOrder("    case1: < 3> : LevelOrder: ")
    bst.delete_BST(68)
    bst.printLevelOrder("    case1: <68> : LevelOrder: ")
    bst.delete_BST(18)
    bst.printLevelOrder("    case1: <18> : LevelOrder: ")
    bst.delete_BST(35)
    bst.printLevelOrder("    case1: <35> root: LevelOrder: ")

# Define testMorseCode() function
def testMorseCodes(): 
    mc=MorseCodes() # Create MorseCode
    mc.makeMorseTree() # Make Morse code tree
    mc.printMorseTree() # Print Morse code tree

    str01 = "MUHAMMADTARIQMAHMOOD" # test string
    mlist = []
    for ch in str01: # Convert alphabet to Morse code
        code = mc.encode(ch)
        mlist.append(code)
    print()
    print("Morse Code: ", mlist) # Print result of Morse code
    print()
    print("Decoding  : ", end='') # Print result of Decoding
    for code in mlist:
        ch = mc.decode(code)
        print(ch, end='')
    print()

"""
    bt=BinaryTree(mc.root)
    bt.printInOrder()
    bt.printPreOrder()
    bt.printPostOrder()
    bt.printLevelOrder()
    print("Tree Height : ", bt.calcHeight(bt.getRoot()))
    print("Leaf count : ", bt.countLeaf(bt.getRoot()))
    print("Size of the Tree : ", bt.countNode(bt.getRoot()))
    
"""

def DFS01(n):
    stack = LifoQueue()
    stack.put(n)
    while not stack.empty():
        n = stack.get()
        if n is not None:
            print(n, end='->')
            stack.put(n.getLeft())
            stack.put(n.getRight())

def BFS01(n):
    queue = Queue()
    queue.put(n)
    while not queue.empty():
        n = queue.get()
        if n is not None:
            print(n, end='->')
            queue.put(n.getLeft())
            queue.put(n.getRight())

def testNode():
    root = Node(14)
    n2=Node(4); n3=Node(15); n4=Node(3); n5=Node(9)
    n6=Node(18); n7=Node(7); n8=Node(16); n9=Node(20)
    n10=Node(5); n11=Node(17)

    root.setLeft(n2); root.setRight(n3)
    # root.left=n2; root.right=n3; → same line
    n2.setLeft(n4); n2.setRight(n5)
    n3.setRight(n6)
    n5.setLeft(n7)
    n6.setLeft(n8); n6.setRight(n9)
    n7.setLeft(n10)
    n8.setRight(n11)

    print("\n Breadth First Search:")
    BFS01(root)

    print("\n Depth First Search:")
    DFS01(root)
    print()
    print()

    bt=BinaryTree(root)
    bt.printInOrder()
    bt.printPreOrder()
    bt.printPostOrder()
    bt.printLevelOrder()
    print("Tree Height : ", bt.calcHeight(bt.getRoot()))
    print("Leaf count : ", bt.countLeaf(bt.getRoot()))
    print("Size of the Tree : ", bt.countNode(bt.getRoot()))

# Define main() function
def main(): 
    #testNode() # Excute testNode() function
    #testMorseCodes() # Excute testMorseCodes() function
    #testET() # Excute testET() function
    #testBinarySearchTree() # Excute testBinarySearchTree() function
    #testWMDic() # Excute testWMDic() function
    testMinHeap() # Excute testMinHeap() function
    #testHuffman() # Excute testHuffman() function

if __name__ == "__main__": # if this module is the highest module,
    main()                 # Excute main() function