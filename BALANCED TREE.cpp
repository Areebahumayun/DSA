#include <iostream>
#include <algorithm>
using namespace std;

class Node {
public:
    Node* left;
    Node* right;
    int val;

    Node(int data) {
        val = data;
        left = nullptr;
        right = nullptr;   
    }
};

class Solution {
public:
    int height(Node* root) {
        if (root == nullptr) {
            return 0;
        }
        return 1 + max(height(root->left), height(root->right));
    }

    bool isBalanced(Node* root) {
        if (root == nullptr) {
            return true;
        }
        int bf = height(root->left) - height(root->right);
        bool currentBalanced = (bf >= -1 && bf <= 1);
        return currentBalanced && isBalanced(root->left) && isBalanced(root->right);
    }
};

int main() {
    // Tree banate hain (LeetCode Example 1 ke mutabiq): [3, 9, 20, null, null, 15, 7]
    Node* root = new Node(3);
    root->left = new Node(9);
    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(7);

    Solution sol;
    if (sol.isBalanced(root)) {
        cout << "Output: true" << endl;
    } else {
        cout << "Output: false" << endl;
    }

    return 0;
}