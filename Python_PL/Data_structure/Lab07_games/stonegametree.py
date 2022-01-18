# Must add children to the node in the order from -1 to -3 stones takes from the pile
class Node(object):
    def __init__(self, v):
        self.kids = []
        self.value = v

    def addKid(self, kid):
        self.kids.append(kid)

    def getValue(self):
        return self.value


# Inserting first object will set the root value of the game tree.
class GameTree(object):
    def __init__(self):
        self.root = None

    def run(self, start_value, lowest_value):
        self.root_node = Node(start_value)
        self.buildTree(self.root_node, start_value, lowest_value)
        # add one because the index starts at 0. We need it to start at 1.
        return self.searchBestMove(self.root_node, lowest_value) + 1

    def buildTree(self, node, value, lowest_value):
        if value < lowest_value:
            return
        for j in range(1, 4):
            temp_node = Node(node.value - j)
            node.addKid(temp_node)
            self.buildTree(temp_node, node.value - j, lowest_value)

    # Collects the occurence, if any, of the lowest_value. Searching the child node array of each node 2 tree levels down.
    # This is done for each child nodes of the root_node. Each lowest lowest_value increments the rank of the branch by 1.
    # The total becomes branch rank. and becomes the brach of choice. Basically the branch that you have the highest chance
    # of reaching the lowest_value.
    def searchBestMove(self, root, low_val):

        return round(self.traverseTreeRankBranch(root, low_val))

    def traverseTreeRankBranch(self, root_node, lowest_value):
        # i us the choice that needs to be returned
        temp_roots = []
        branch_rank = [0, 0, 0]
        x_zero = 0
        x_max = 0
        x_index = 2
        for i, child_node in enumerate(root_node.kids):
            for sub_child_node in child_node.kids:
                temp_roots.append(sub_child_node)
                for n in sub_child_node.kids:
                    if n.value is lowest_value:
                        branch_rank[i] += 1

        # Get the index of the largest value in the array

        for i, n in enumerate(branch_rank):
            x_zero = 0
            x_zero += n
            if x_max < n:
                x_max = n
                x_index = i

        # All branches are the same rank. traverseTreeRankBranch again
        if x_zero is 0:
            return (self.traverseTreeRankBranch(temp_roots[0], lowest_value) + self.traverseTreeRankBranch(temp_roots[1],
                                                                                                          lowest_value) + self.traverseTreeRankBranch(
                temp_roots[2], lowest_value) ) / 3
        # found a good match return the value of the index. note index starts at 0
        else:
            return x_index