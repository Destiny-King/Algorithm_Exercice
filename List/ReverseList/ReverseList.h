//
// Created by Destiny on 2022/8/3.
//

#ifndef ARRAY_REVERSELIST_H
#define ARRAY_REVERSELIST_H

#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int val) : val(val), next(NULL) {}
};

class ReverseList {
public:
  void initList(ListNode *head);                       //初始化链表
  void showList(ListNode *head);                       //显示链表
  ListNode *reverseList_DoublePointer(ListNode *head); //双指针法
  ListNode *reverseList_Recursion(ListNode *head);     //递归法
};

#endif // ARRAY_REVERSELIST_H
