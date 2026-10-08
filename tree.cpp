#include <iostream>
#include <vector>
using namespace std;

// Tree search

// class Node{
//     public:
//         int data;
//         vector<Node*> children;

//         Node(int x){
//             data=x;
//         }
// };

// void addChild(Node* parent, Node* child) {
//     parent->children.push_back(child);
// }

// // Function to print parents of each node
// void printParents(Node* node, Node* parent) {
//     if (parent == nullptr)
//         cout << node->data << " -> NULL" << endl;
//     else
//         cout << node->data << " -> " << parent->data << endl;

//     for (auto child : node->children)
//         printParents(child, node);
// }

// // Function to print children of each node
// void printChildren(Node* node) {
//     cout << node->data << " -> ";
//     for (auto child : node->children)
//         cout << child->data << " ";
//     cout << endl;

//     for (auto child : node->children)
//         printChildren(child);
// }

// // Function to print leaf nodes
// void printLeafNodes(Node* node) {
//     if (node->children.empty()) {
//         cout << node->data << " ";
//         return;
//     }
//     for (auto child : node->children)
//         printLeafNodes(child);
// }

// // Function to print degrees of each node 
// void printDegrees(Node* node, Node* parent) {
//     int degree = node->children.size();
//     if (parent != nullptr)  
//         degree++;
//     cout << node->data << " -> " << degree << endl;

//     for (auto child : node->children)
//         printDegrees(child, node);
// }

// int main(){
//     Node* root=new Node(1);
//     Node* n2=new Node(2);
//     Node* n3 = new Node(3);
//     Node* n4 = new Node(4);
//     Node* n5 = new Node(5);
//     Node* n6 = new Node(6);
//     Node* n7 = new Node(7);

//     // Constructing tree
//     addChild(root, n2);
//     addChild(root, n3);
//     addChild(n2, n4);
//     addChild(n2, n5);
//     addChild(n3, n6);
//     addChild(n3, n7);

//     cout << "Parents of each node:" << endl;
//     printParents(root, nullptr);

//     cout << "Children of each node:" << endl;
//     printChildren(root);

//     cout << "Leaf nodes: ";
//     printLeafNodes(root);
//     cout << endl;

//     cout << "Degrees of nodes:" << endl;
//     printDegrees(root, nullptr);

//     return 0;
// }



// Tree Traversal



// class Node{
//     public:
//         int data;
//         Node* left;
//         Node* right;

//         Node(int x){
//             data=x;
//             left=right=NULL;
//         }
// };

// void preorderTraversal(Node* node,vector<int>& res){
//     if(node==nullptr){
//         return;
//     }

//     res.push_back(node->data);
    
//     preorderTraversal(node->left,res);

//     preorderTraversal(node->right,res);

// }

// void inorderTraversal(Node* node,vector<int>& res){
//     if(node==nullptr){
//         return;
//     }
//     preorderTraversal(node->left,res);

//     res.push_back(node->data);
    

//     preorderTraversal(node->right,res);

// }

// void inorderTraversal(Node* node,vector<int>& res){
//     if(node==nullptr){
//         return;
//     }
//     preorderTraversal(node->left,res);

//     preorderTraversal(node->right,res);
    
//     res.push_back(node->data);


// }

// int main() {
//     // Create binary tree
//     //       1
//     //      /  \
//     //    2     3
//     //   / \     \
//     //  4   5     6
//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->right = new Node(6);

//     vector<int> res;
//     // preorderTraversal(root, res);
//     inorderTraversal(root, res);
//     for(int node : res) 
//         cout << node << " ";

//     return 0;
// }

