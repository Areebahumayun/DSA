#include <iostream>
#include <string>
using namespace std;
struct Node {
    string name;
    string phonenumber; 
    Node* left;
    Node* right;
};
Node* createnode(string name, string phonenumber) {
    Node* newNode = new Node(); 
    newNode->name = name;
    newNode->phonenumber = phonenumber;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}
Node* insert(Node* root, string name, string phonenumber) {
    if (root == nullptr) {
        return createnode(name, phonenumber);
    }
    if (name < root->name) {
        root->left = insert(root->left, name, phonenumber);
    } 
    else if (name > root->name) {
        root->right = insert(root->right, name, phonenumber);
    }
    
    return root; 
}

Node* search(Node* root, string name) {
    if (root == nullptr || root->name == name) {
        return root;
    }
    
    if (name < root->name) {
        return search(root->left, name);
    }
    
    return search(root->right, name);
}
void editContact(Node* root, string name) {
    Node* target = search(root, name); 
    
    if (target != nullptr) { 
        string newPhone;
        cout << "Current Phone Number: " << target->phonenumber << endl;
        cout << "Enter New Phone Number: ";
        getline(cin, newPhone);
        target->phonenumber = newPhone; 
        cout << "Contact updated successfully!\n";
    } else {
        cout << "Contact not found! Cannot edit.\n";
    }
}

void inorderTraversal(Node* root) {
    if (root == nullptr) {
        return; 
    }
    inorderTraversal(root->left);  
    cout << "Name: " << root->name << " | Phone: " << root->phonenumber << endl; // Root
    inorderTraversal(root->right); 
}
int main() {
    Node* root = nullptr;
    int choice;
    string name, phone;

    cout << " Welcome to Phonebook System " << endl;

    while (true) {
        cout << "\n1. Add Contact\n2. Search Contact\n3. Edit Contact\n4. Display All Contacts\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); 
        if (choice == 1) {
            cout << "Enter Name: ";
            getline(cin, name);
            cout << "Enter Phone Number: ";
            getline(cin, phone);
            root = insert(root, name, phone);
            cout << "Contact added successfully!\n";
        } 
        else if (choice == 2) {
            cout << "Enter Name to Search: ";
            getline(cin, name);
            Node* result = search(root, name);
            if (result != nullptr) {
                cout << "Contact Found -> Name: " << result->name << " | Phone: " << result->phonenumber << endl;
            } else {
                cout << "Contact not found!\n";
            }
        } 
        else if (choice == 3) {
            cout << "Enter Name to Edit: ";
            getline(cin, name);
            editContact(root, name);
        }
        else if (choice == 4) {
            cout << "\n--Contact List in Alphabetical Order -\n";
            if (root == nullptr) {
                cout << "Phonebook is empty.\n";
            } else {
                inorderTraversal(root);
            }
        } 
        else if (choice == 5) {
            cout << "Exiting Thank you!\n";
            break;
        } 
        else {
            cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}