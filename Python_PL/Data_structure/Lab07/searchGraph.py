from graph import *          # import everything from graph module
from queue import Queue      # import Queue class from queue module
from queue import LifoQueue  # import LifoQueue class from queue module

# Define SearchGraph class
class SearchGraph:
    # Define DFS function for using set() and stack(LifoQueue)
    def dfs(self, adjList, start):
        #adjList = G.getAdjList()
        visited = set()
        print("\nDFS starting with vertex", start)
        visited.add(start)
        stack = LifoQueue()
        stack.put(start)

        while not stack.empty():
            vertex = stack.get()
            print(vertex, end = ' -> ') # Take out vertex print
            nbr = adjList[vertex]
            for node in nbr:
                if node not in visited:
                    visited.add(node)
                    stack.put(node)

    # Define BFS function for using Queue()
    def bfs(self, adjList, start):
        seen = set()
        print("\nBFS starting with vertex", start)
        seen.add(start)
        queue = Queue()
        queue.put(start)

        while not queue.empty():
            vertex = queue.get()
            print(vertex, end = ' -> ')
            nbr = adjList[vertex]
            for node in nbr:
                if node not in seen:
                    seen.add(node)
                    queue.put(node)