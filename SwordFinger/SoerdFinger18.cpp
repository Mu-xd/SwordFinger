//-------------------------------------------------------
//������18. ɾ������Ľڵ�
//�������������ͷָ���һ��Ҫɾ���Ľڵ��ֵ������һ������ɾ���ýڵ㡣
//����ɾ����������ͷ�ڵ㡣
//---------------------------------------------------------
//����˼·�������ⷨ
//---------------------------------------------------------
//����:Mxd
//ʱ�䣺2020/05/28
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
        if (head == nullptr) return head; //����߽�����
        if (head->val == val)             //�����ͷ���
            return head->next;
        ListNode* ans = head;
        while (head->next != nullptr)
        {
            if (head->next->val == val)    //�ҵ��˽ڵ�ɾ����
            {
                head->next = head->next->next;
                break;
            }
            head = head->next;
        }
        return ans;
    }
};