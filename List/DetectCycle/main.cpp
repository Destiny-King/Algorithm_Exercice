//
// Created by Destiny on 2022/7/5.
//
#include "DetectCycle.h"

int main() {
  system("chcp 65001");

  //初始化链表
  DetectCycle cycle;
  ListNode *a = cycle.create(8);

  cycle.accessList(a);

  ListNode *index = cycle.detectCycle(a);
  cout << index->val << endl;

  return 0;
}