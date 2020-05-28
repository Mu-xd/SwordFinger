//-------------------------------------------------------
//面试题18. 删除链表的节点
//给定单向链表的头指针和一个要删除的节点的值，定义一个函数删除该节点。
//返回删除后的链表的头节点。
//---------------------------------------------------------
//解题思路：暴力解法
//---------------------------------------------------------
//作者:Mxd
//时间：2020/05/28
//----------------------------------------------------------
#include<iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
    ListNode* deleteNode(ListNode* head, int val) {
        if (head == nullptr) return head; //处理边界条件
        if (head->val == val)             //如果是头结点
            return head->next;
        ListNode* ans = head;
        while (head->next != nullptr)
        {
            if (head->next->val == val)    //找到了节点删除它
            {
                head->next = head->next->next;
                break;
            }
            head = head->next;
        }
        return ans;
    }
};