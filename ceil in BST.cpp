#include <iostream>
#include <vector>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to find the Ceil of a value in BST
int findCeil(Node* root, int input) {
    int ceil =-1;

    while (root != nullptr) {
        if (root->data == input) {
            return root->data;
        }

        if (root->data > input) {
            ceil = root->data;
            root = root->left;
        } 
        else {
            root = root->right;
        }
    }

    return ceil;
}

int main() {
    /*
        Constructing the following BST:
                 5
                / \
               1   7
                \
                 2
                  \
                   3
    */
    Node* root = new Node(5);
    root->left = new Node(1);
    root->right = new Node(7);
    root->left->right = new Node(2);
    root->left->right->right = new Node(3);

    vector<int> testInputs = {3, 4, 6, 8, 0};

    cout << "BST Nodes: [1, 2, 3, 5, 7]\n\n";
    for (int x : testInputs) {
        int result = findCeil(root, x);
        cout << "Ceil of " <<x << "is: " << result << "\n";
    }

    return 0;
}