//
// Created by Destiny on 2022/8/5.
//

#ifndef LIST_REMOVENTHFROMEND_H
#define LIST_REMOVENTHFROMEND_H

#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int val) : val(val), next(NULL) {}
};

class RemoveNthFromEnd {
public:
  void initList(ListNode *head); //初始化链表
  void showList(ListNode *head); //显示链表
  ListNode *removeNthFromEnd(ListNode *head, int n);
};

#endif // LIST_REMOVENTHFROMEND_H
