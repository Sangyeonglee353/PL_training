from minheap import * # import everything from minheap

# Define HNode class
class HNode:
    # Initializer
    def __init__(self, char=None, freq=None, left=None, right=None):
        self.char = char
        self.freq = freq
        self.left = left
        self.right = right
    
    # Override __str__ function
    def __str__(self):
        return str(self.freq)

    # Override specific function
    def __eq__(self, rhs): return self.freq == rhs.freq
    def __ne__(self, rhs): return self.freq != rhs.freq
    def __lt__(self, rhs): return self.freq < rhs.freq
    def __le__(self, rhs): return self.freq <= rhs.freq
    def __gt__(self, rhs): return self.freq > rhs.freq
    def __ge__(self, rhs): return self.freq >= rhs.freq

# Define Huffman class
class Huffman():
    # Initalizer
    def __init__(self, txt=None):
        self.text = txt
        self.mh = MinHeap()
        self.codes = {}
        self.decodes = {}
    
    # Define makeFrequnecy Dictionary function
    def makeFrequencyDict(self):
        frequencies = {}
        for c in self.text:
            if not c in frequencies:
                frequencies[c] = 0
            frequencies[c] += 1
        return frequencies

    # Define make Heap function for calculating the Frequency
    def makeHeap(self):
        frequencies = self.makeFrequencyDict()
        for key in frequencies:
            node = HNode(key, frequencies[key])
            self.mh.insert(node)

    # Huffman Algorithm
    def makeHuffmanTree(self): 
        self.makeHeap()
        while(self.mh.getSize() > 1):
            p = self.mh.delete()
            q = self.mh.delete()
            r = HNode(None, p.freq + q.freq, p, q)
            self.mh.insert(r)
        return self.mh.delete()

    # Define makeCodes function for making Huffman code
    def makeCodes(self):
        root = self.makeHuffmanTree()
        current_code = ""
        self.make_codes(root, current_code)

    # Define make_codes function for making Huffman code
    def make_codes(self, root, current_code):
        if(root is None):
            return
        
        if(root.char != None):
            self.codes[root.char] = current_code
            self.decodes[current_code] = root.char
            return
        
        self.make_codes(root.left, current_code + "0")
        self.make_codes(root.right, current_code + "1")

    # Define the printing format function 
    # for outputting according to the printing format
    def printCodes(self):
        self.makeCodes()
        for key in self.codes:
            print("{} : {}".format(key, self.codes[key]))


        print("Reverse Coding")
        for key in self.decodes:
            print("{} : {}".format(key, self.decodes[key]))