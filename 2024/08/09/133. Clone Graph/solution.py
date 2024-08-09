"""
# Definition for a Node.
class Node:
    def __init__(self, val = 0, neighbors = None):
        self.val = val
        self.neighbors = neighbors if neighbors is not None else []
"""

from typing import Optional
class Solution:
    def cloneGraph(self, node: Optional['Node']) -> Optional['Node']:
        def helper(node, hmap):
            mynode = Node(node.val)
            hmap[node] = mynode
            for n in node.neighbors:
                if n not in hmap:
                    helper(n, hmap)
                mynode.neighbors.append(hmap[n])
        if not node: return None
        hmap = {}
        helper(node, hmap)
        return hmap[node]