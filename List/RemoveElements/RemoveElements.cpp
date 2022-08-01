//
// Created by Destiny on 2022/7/5.
//

#include "RemoveElements.h"

//初始化链表
void RemoveElements::initList(LinkList &list) {
  //初始化生成单链表
  ListNode *p, *q;
  //创建头结点
  list = (LinkList)malloc(sizeof(LinkList));
  list->next = NULL;
  p = list;
  //开始生成单链表(尾插法)
  /*for (int i = 0; i < 7; ++i) {
    q = (LinkList)malloc(sizeof(LinkList));
    q->val = i;
    p->next = q;
    p = q;
    p->next = NULL;
  }*/

  q = (LinkList)malloc(sizeof(LinkList));
  q->val = 1;
  p->next = q;
  p = q;
  p->next = NULL;

  q = (LinkList)malloc(sizeof(LinkList));
  q->val = 4;
  p->next = q;
  p = q;
  p->next = NULL;

  q = (LinkList)malloc(sizeof(LinkList));
  q->val = 2;
  p->next = q;
  p = q;
  p->next = NULL;

  q = (LinkList)malloc(sizeof(LinkList));
  q->val = 4;
  p->next = q;
  p = q;
  p->next = NULL;
}

//显示链表
void RemoveElements::showList(LinkList &list) {
  LinkList p;
  for (p = list->next; p != NULL; p = p->next) {
    cout << p->val << " ";
  }
  cout << endl;
}

//原链表
ListNode *RemoveElements::removeElements(ListNode *head, int val) {
  //删除头结点
  while (head != NULL && head->val == val) {
    ListNode *tmp = head;
    head = head->next;
    delete tmp;
  }

  //删除非头结点
  ListNode *cur = head;
  while (cur != NULL && cur->next != NULL) {
    if (cur->next->val == val) {
      ListNode *tmp = cur->next;
      cur->next = cur->next->next;
      delete tmp;
    } else {
      cur = cur->next;
    }
  }
  return head;
}

//设置一个虚拟头结点进行移除节点操作
ListNode *RemoveElements::removeElements_virtualNode(ListNode *head, int val) {
  ListNode *dummyHead = new ListNode(0); //设置一个虚拟头结点
  dummyHead->next = head;                //将虚拟头结点指向head
  ListNode *cur = dummyHead;
  while (cur->next != NULL) {
    if (cur->next->val == val) {
      ListNode *tmp = cur->next;
      cur->next = cur->next->next;
      delete tmp;
    } else {
      cur = cur->next;
    }
    head = dummyHead->next;
    delete dummyHead;
    return head;
  }
}
