//
// Created by Destiny on 2022/10/31.
//
#include "BinarySearchTree.h"

int main() {
  system("chcp 65001");

  BinarySearchTree binarySearchTree;

  int n = 5;
  int ret = binarySearchTree.numTrees(n);
  cout << ret << endl;

  return 0;
}