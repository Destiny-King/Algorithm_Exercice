//
// Created by Destiny on 2022/7/5.
//
#include "IntersectList.h"

int main() {
  system("chcp 65001");

  //数据初始化
  ListNode *head = new ListNode(1);
  ListNode *head2 = new ListNode(5);

  //对象实例化
  IntersectList intersectList;
  ListNode *headA = intersectList.initList(head); //初始化链表
  intersectList.showList(head);                   //显示链表

  ListNode *headB = intersectList.initList2(head2);
  intersectList.showList(head2);

  ListNode *intersect = intersectList.getIntersectionNode(headA, headB);
  cout << intersect->val;
  return 0;
}