//
// Created by Destiny on 2022/7/5.
//
#include "SwapPairs.h"

int main() {
  system("chcp 65001");

  //数据初始化
  ListNode *head = new ListNode(1);

  //初始化链表
  SwapPairs swapPairs;
  swapPairs.initList(head);
  swapPairs.showList(head);

  //递归法反转
  cout << "交换链表：" << endl;
  ListNode *head2 = swapPairs.swapPairs(head);
  swapPairs.showList(head2);

  return 0;
}