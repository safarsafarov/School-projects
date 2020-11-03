#include <stdio.h>
using namespace std;

// Data structure to store a Binary Search Tree node
struct Node {
    int data;
    Node *left, *right;
};

// Function to create a new binary tree node having given key
Node* newNode(int key)
{
    Node* node = new Node;
    node->data = key;
    node->left = node->right = null ptr;

    return node;
}

// Function to perform in-order traversal of the tree
void inorder(Node* root)
{
    if (root == null ptr)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Recursive function to insert a key into BST
Node* insert(Node* root, int key)
{
    // if the root is null, create a new node and return it
    if (root == null ptr)
        return newNode(key);

    // if given key is less than the root node, recur for left subtree
    if (key < root->data)
        root->left = insert(root->left, key);

    // if given key is more than the root node, recur for right subtree
    else
        root->right = insert(root->right, key);

    return root;
}

// Helper function to return sum of all nodes present in a binary tree
int findSum(Node* root)
{
    if (root == null ptr)
        return 0;

    return root->data + findSum(root->left) + findSum(root->right);
}

// Function to modify the BST such that every key is updated to
// contain sum of all greater keys
void update(Node* root, int &sum)
{
    // base case
    if (root == null ptr)
        return;

    // update the left subtree
    update(root->left, sum);

    // modify the sum to contain sum of all greater keys
    sum = sum - root->data;

    // update the root to contain sum of all greater keys
    root->data += sum;

    // update the right subtree
    update(root->right, sum);
}

int main()
{
    Node* root = null ptr;
    /* Construct below tree
           5
         /   \
        /     \
       3       8
      / \     / \
     /   \   /   \
    2     4 6    10   */

    int keys[] = { 5, 3, 2, 4, 6, 8, 10 };
    int n = sizeof(keys)/sizeof(keys[0]);

    for (int key : keys)
        root = insert(root, key);

    int sum = findSum(root);

    update(root, sum);

    inorder(root);

    return 0;
}
