//------------------------------------------------------------Self-Referential Class in C++------------------------------------------------------

/*
- A `self-referential class` is a class that contains a pointer or reference to an object of the same class type.
- These classes are often used in data structures like linked lists, trees, and graphs.
- The pointer acts as a connection or link between different objects of the same class.
*/

//-------------------------------------------------------------Syntax of Self-Referential Class---------------------------------------------------
/*
    class SelfReferential {
        SelfReferential* next; // Pointer to an object of the same class
    public:
        // Class methods
    };
*/

//-------------------------------------------------------------Example Codes----------------------------------------------------------------------

/*
Example 1: Self-Referential Class for a Simple Node
- This example shows a self-referential class used in a linked list.
*/
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next; // Pointer to the next Node object

    Node(int value) : data(value), next(nullptr) {}
};

int main() {
    Node node1(10);
    Node node2(20);

    node1.next = &node2; // Linking nodes

    cout << "Node 1 Data: " << node1.data << endl;
    cout << "Node 2 Data: " << node1.next->data << endl;

    return 0;
}
/*
Output:
Node 1 Data: 10
Node 2 Data: 20
*/

/*
Example 2: Self-Referential Class with Recursive Behavior
- Self-referential classes can also be used to implement recursive data structures like binary trees.
*/
#include <iostream>
using namespace std;

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

void inOrderTraversal(TreeNode* root) {
    if (root) {
        inOrderTraversal(root->left);
        cout << root->data << " ";
        inOrderTraversal(root->right);
    }
}

int main() {
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(15);

    cout << "In-Order Traversal: ";
    inOrderTraversal(root);
    cout << endl;

    return 0;
}
/*
Output:
In-Order Traversal: 5 10 15
*/
