#include <iostream>
#include "BST.h"
using namespace std;


int main() {
  BST tree;
  tree.insert(5);
  tree.insert(53);
  tree.insert(25);
  tree.insert(13);
  tree.printIn(tree.root);
}