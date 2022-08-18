//
// Created by Destiny on 2022/8/18.
//

#ifndef LIST_DETECTCYCLE_H
#define LIST_DETECTCYCLE_H

#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int val) : val(val), next(NULL) {}
  ListNode() : val(val), next(NULL) {}
};

class DetectCycle {
public:
  void initList(ListNode *head);         //初始化链表
  void showList(ListNode *head);         //显示链表
  ListNode *create(int n);               //创建环形链表
  void accessList(ListNode *head);       //访问循环链表
  ListNode *detectCycle(ListNode *head); //环形链表
};

#endif // LIST_DETECTCYCLE_H
