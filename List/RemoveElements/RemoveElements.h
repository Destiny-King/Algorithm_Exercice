//
// Created by Destiny on 2022/7/5.
//

#ifndef ARRAY_REMOVEELEMENTS_H
#define ARRAY_REMOVEELEMENTS_H

#include <iostream>
using namespace std;

typedef struct ListNode {
  int val;        //节点上存储的元素,数据域
  ListNode *next; //指向下一个节点的指针,指针域
  ListNode(int x) : val(x), next(NULL) {} //节点的构造函数
} LNode, *LinkList;

class RemoveElements {
public:
  void initList(LinkList &list);                     //初始化链表
  void showList(LinkList &list);                     //显示链表
  ListNode *removeElements(ListNode *head, int val); //原链表
  ListNode *removeElements_virtualNode(ListNode *head, int val); //虚拟头结点
};

#endif // ARRAY_REMOVEELEMENTS_H
