#include <iostream>
using namespace std;

struct Node {
  int data;
  Node* left;
  Node* right;
};

Node* createNode(int data) {
  Node* newNode = new Node;
  newNode->data = data;
  newNode->left = nullptr;
  newNode->right = nullptr;
  return newNode;
}

class BST {
private:
  void insert(Node* node, int data) {
    if (data <= node->data) {
     if (node->left == nullptr) {
       node->left = createNode(data);
       return;
     } 
     insert(node->left, data);
    } else {
      if (node->right == nullptr) {
        node->right = createNode(data);
        return;
      }
      insert(node->right, data);
    }
  }
public:
  Node* root;
  BST() { root = nullptr; }
  bool empty() { return root == nullptr; }

  void insert(int data) {
    if (empty()) {
      root = createNode(data);
      return;
    }

    insert(root, data);
  }

  void printIn(Node* node) {
    if (node == nullptr)
      return;
    if (node->left != nullptr) printIn(node->left);
    if (node->right != nullptr) printIn(node->right);
    cout << node->data << endl;
  }
};