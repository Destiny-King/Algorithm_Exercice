//
// Created by Destiny on 2022/7/5.
//
#include "QueuesToStacks.h"

int main() {
  system("chcp 65001");

  QueuesToStacks queuesToStacks;

  queuesToStacks.push(1);
  queuesToStacks.push(2);

  int a1 = queuesToStacks.pop();
  cout << a1 << endl;

  queuesToStacks.push(3);
  queuesToStacks.push(4);
  int a2 = queuesToStacks.pop();
  cout << a2 << endl;

  int a3 = queuesToStacks.pop();
  cout << a3 << endl;

  int a4 = queuesToStacks.pop();
  cout << a4 << endl;

  bool b = queuesToStacks.empty();
  if (b == 0) {
    cout << "false" << endl;
  } else if (b == 1) {
    cout << "true" << endl;
  }

  return 0;
}