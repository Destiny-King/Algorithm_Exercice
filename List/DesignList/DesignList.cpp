//
// Created by Destiny on 2022/8/2.
//

#include "DesignList.h"

DesignList::DesignList() {
  size = 0;
  dummyHead = new LinkedNode(0);
}

//获取到第index个节点数值
int DesignList::get(int index) {
  if (index < 0 || index >= size) {
    return -1;
  }

  LinkedNode *cur = dummyHead->next;
  while (index--) {
    cur = cur->next;
  }
  return cur->val;
}

//在链表最前面插入一个节点
void DesignList::addAtHead(int val) {
  LinkedNode *newNode = new LinkedNode(val);
  newNode->next = dummyHead->next;
  dummyHead->next = newNode;
  size++;
}

//在链表最后面添加一个节点
void DesignList::addAtTail(int val) {
  LinkedNode *newNode = new LinkedNode(val);
  LinkedNode *cur = dummyHead;
  while (cur->next != nullptr) {
    cur = cur->next;
  }
  cur->next = newNode;
  size++;
}

//在第index个节点之前插入一个新节点
void DesignList::addAtIndex(int index, int val) {
  if (index < 0 || index > size) {
    return;
  }
  LinkedNode *newNode = new LinkedNode(val);
  LinkedNode *cur = dummyHead;
  while (index--) {
    cur = cur->next;
  }
  newNode->next = cur->next;
  cur->next = newNode;
  size++;
}

//删除第index个节点
void DesignList::deleteAtIndex(int index) {
  if (index >= size || index < 0) {
    return;
  }
  LinkedNode *cur = dummyHead;
  while (index--) {
    cur = cur->next;
  }
  LinkedNode *tmp = cur->next;
  cur->next = cur->next->next;
  delete tmp;
  size--;
}

//打印链表
void DesignList::printLinkedList() {
  LinkedNode *cur = dummyHead;
  while (cur->next != NULL) { //为NULL则节点输出结束
    cout << cur->next->val << " ";
    cur = cur->next;
  }
  cout << endl;
}
