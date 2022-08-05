//
// Created by Destiny on 2022/7/5.
//
#include "removeNthFromEnd.h"

int main() {
  system("chcp 65001");

  //数据初始化
  ListNode *head = new ListNode(1);
  int val = 2;

  //对象实例化
  RemoveNthFromEnd removeNthFromEnd;
  removeNthFromEnd.initList(head); //初始化链表
  removeNthFromEnd.showList(head); //显示链表

  removeNthFromEnd.removeNthFromEnd(head, val);
  removeNthFromEnd.showList(head);

  return 0;
}