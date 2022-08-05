//
// Created by Destiny on 2022/8/5.
//

#include "removeNthFromEnd.h"

void RemoveNthFromEnd::initList(ListNode *head) {
  vector<int> nums = {1, 4, 2, 4, 3, 4}; //待创建链表的数值内容

  ListNode *cur = head;
  for (int i = 1; i < nums.size(); ++i) { //通过循环把数组里的值依次放到链表
    ListNode *newNode = new ListNode(nums[i]); //创建新节点并赋值
    cur->next = newNode; //上一个节点的next指向这个新建的节点
    cur = newNode;       //保留新节点
  }
}
void RemoveNthFromEnd::showList(ListNode *head) {
  ListNode *cur = head;
  while (cur != NULL) { //为NULL则节点输出结束
    cout << cur->val << " ";
    cur = cur->next;
  }
  cout << endl;
}

ListNode *RemoveNthFromEnd::removeNthFromEnd(ListNode *head, int n) {
  ListNode *dummyHead = new ListNode(0);
  dummyHead->next = head;
  ListNode *slow = dummyHead;
  ListNode *fast = dummyHead;
  while (n-- && fast != NULL) {
    fast = fast->next;
  }
  fast = fast->next;
  while (fast != NULL) {
    fast = fast->next;
    slow = slow->next;
  }
  slow->next = slow->next->next;
  return dummyHead->next;
}
