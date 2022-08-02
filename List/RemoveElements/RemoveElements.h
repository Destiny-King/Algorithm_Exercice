//
// Created by Destiny on 2022/7/5.
//

#ifndef ARRAY_REMOVEELEMENTS_H
#define ARRAY_REMOVEELEMENTS_H

#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
  int val;        //节点上存储的元素,数据域
  ListNode *next; //指向下一个节点的指针,指针域
  ListNode(int x) : val(x), next(NULL) {} //节点的构造函数
};

class RemoveElements {
public:
  void initList(ListNode *head);                     //初始化链表
  void showList(ListNode *head);                     //显示链表
  ListNode *removeElements(ListNode *head, int val); //原链表
  ListNode *removeElements_virtualNode(ListNode *head, int val); //虚拟头结点
};

#endif // ARRAY_REMOVEELEMENTS_H
