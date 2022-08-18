//
// Created by Destiny on 2022/8/18.
//

#include "DetectCycle.h"

//初始化链表
void DetectCycle::initList(ListNode *head) {
  vector<int> nums = {1, 4, 2, 4, 3, 4, 4, 4, 5, 4}; //待创建链表的数值内容

  ListNode *cur = head;
  for (int i = 1; i < nums.size(); ++i) { //通过循环把数组里的值依次放到链表
    ListNode *newNode = new ListNode(nums[i]); //创建新节点并赋值
    cur->next = newNode; //上一个节点的next指向这个新建的节点
    cur = newNode;       //保留新节点
  }
}

//显示链表
void DetectCycle::showList(ListNode *head) {
  ListNode *cur = head;
  while (cur != NULL) { //为NULL则节点输出结束
    cout << cur->val << " ";
    cur = cur->next;
  }
  cout << endl;
}

//创建环形链表
ListNode *DetectCycle::create(int n) {
  //创建具有n个节点的循环链表,第i个节点对应的val=i
  ListNode *head = new ListNode(n);
  //头插法，每次在链表头部插入节点
  head->next = head;
  for (int i = n - 1; i >= 1; i--) {
    ListNode *node = new ListNode(i);
    node->next = head->next;
    head->next = node;
  }
  return head->next; //根据节点意义，确定谁才是最终的头结点
}

//访问循环链表
void DetectCycle::accessList(ListNode *head) {
  ListNode *cur = head;
  while (cur->next != head) {
    cout << cur->val << " "; //这里也可以是对节点的其他操作
    cur = cur->next;
  }
  cout << cur->val << endl;
}

ListNode *DetectCycle::detectCycle(ListNode *head) {
  ListNode *fast = head;
  ListNode *slow = head;
  while (fast != NULL && fast->next != NULL) {
    slow = slow->next;
    fast = fast->next->next;
    //快慢指针相遇
    if (slow == fast) {
      ListNode *index1 = fast;
      ListNode *index2 = head;

      while (index1 != index2) {
        index1 = index1->next;
        index2 = index2->next;
      }
      return index2;
    }
  }
  return NULL;
}
