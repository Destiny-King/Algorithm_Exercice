//
// Created by Destiny on 2022/7/5.
//
#include "ReverseList.h"

int main() {
  system("chcp 65001");

  //数据初始化
  ListNode *head = new ListNode(1);

  //初始化链表
  ReverseList reverseList;
  reverseList.initList(head);
  reverseList.showList(head);

  //双指针法反转
  //  cout << "双指针法反转：" << endl;
  //  ListNode *head2 = reverseList.reverseList_DoublePointer(head);
  //  reverseList.showList(head2);

  //递归法反转
  cout << "递归法反转：" << endl;
  ListNode *head3 = reverseList.reverseList_Recursion(head);
  reverseList.showList(head3);

  return 0;
}