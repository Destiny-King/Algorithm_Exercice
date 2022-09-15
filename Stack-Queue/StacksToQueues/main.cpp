//
// Created by Destiny on 2022/7/5.
//
#include "StacksToQueues.h"

int main() {
  system("chcp 65001");

  StacksToQueues stacksToQueues;

  stacksToQueues.push(1);
  stacksToQueues.push(2);

  int a1 = stacksToQueues.pop();
  cout << a1 << endl;
  int a2 = stacksToQueues.pop();
  cout << a2 << endl;
  //  int a3 = stacksToQueues.peek();
  //  cout << a3 << endl;
  bool b = stacksToQueues.empty();
  if (b == 0) {
    cout << "false" << endl;
  } else if (b == 1) {
    cout << "true" << endl;
  }

  return 0;
}