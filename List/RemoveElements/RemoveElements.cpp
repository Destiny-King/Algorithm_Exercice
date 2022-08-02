//
// Created by Destiny on 2022/7/5.
//

#include "RemoveElements.h"

//初始化链表
void RemoveElements::initList(ListNode *head) {
  vector<int> nums = {1, 4, 2, 4, 3, 4}; //待创建链表的数值内容

  ListNode *cur = head;
  for (int i = 1; i < nums.size(); ++i) { //通过循环把数组里的值依次放到链表
    ListNode *newNode = new ListNode(nums[i]); //创建新节点并赋值
    cur->next = newNode; //上一个节点的next指向这个新建的节点
    cur = newNode;       //保留新节点
  }
}

//显示链表
void RemoveElements::showList(ListNode *head) {
  ListNode *cur = head;
  while (cur != NULL) { //为NULL则节点输出结束
    cout << cur->val << " ";
    cur = cur->next;
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
  }
  head = dummyHead->next;
  delete dummyHead;
  return head;
}