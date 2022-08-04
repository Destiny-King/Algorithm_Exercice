//
// Created by Destiny on 2022/8/4.
//

#ifndef LIST_SWAPPAIRS_H
#define LIST_SWAPPAIRS_H

#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int val) : val(val), next(NULL) {}
};

class SwapPairs {
public:
  void initList(ListNode *head); //初始化链表
  void showList(ListNode *head); //显示链表
  ListNode *swapPairs(ListNode *head);
};

#endif // LIST_SWAPPAIRS_H
