//
// Created by Destiny on 2022/8/10.
//

#ifndef LIST_INTERSECTLIST_H
#define LIST_INTERSECTLIST_H

#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int val) : val(val), next(NULL) {}
};

class IntersectList {
public:
  ListNode *initList(ListNode *head); //初始化链表
  ListNode *initList2(ListNode *head);
  void showList(ListNode *head); //显示链表
  ListNode *getIntersectionNode(ListNode *headA, ListNode *headB);
};

#endif // LIST_INTERSECTLIST_H
