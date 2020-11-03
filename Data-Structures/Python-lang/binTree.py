# Class to store a Binary Search Tree node
class Node:
    def __init__(self, data, left=None, right=None):
        self.data = data
        self.left = left
        self.right = right


# Function to perform in-order traversal of the tree
def inorder(root):

    if root is None:
        return

    inorder(root.left)
    print(root.data, end=' ')
    inorder(root.right)


# Recursive function to insert a key into BST
def insert(root, key):

    # if the root is None, create a node and return it
    if root is None:
        return Node(key)

    # if given key is less than the root node, recur for left subtree
    if key < root.data:
        root.left = insert(root.left, key)

    # if given key is more than the root node, recur for right subtree
    else:
        root.right = insert(root.right, key)

    return root


# Function to return sum of all nodes present in a binary tree
def findSum(root):

    if root is None:
        return 0

    return root.data + findSum(root.left) + findSum(root.right)


# Function to modify the BST such that every key is updated to
# contain sum of all greater keys
def update(root, sum):

    # base case
    if root is None:
        return sum

    # update the left subtree
    sum = update(root.left, sum)

    # modify the sum to contain sum of all greater keys
    sum = sum - root.data

    # update the root to contain sum of all greater keys
    root.data += sum

    # update the right subtree
    sum = update(root.right, sum)

    return sum


if __name__ == '__main__':

    root = None
    """ Construct below tree
               5
             /   \
            /     \
           3       8
          / \     / \
         /   \   /   \
        2    4 6     10
    """

    keys = [5, 3, 2, 4, 6, 8, 10]
    for key in keys:
        root = insert(root, key)

    sum = findSum(root)
    update(root, sum)
    inorder(root)
