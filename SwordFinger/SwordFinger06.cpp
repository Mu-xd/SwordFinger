////-------------------------------------------------------
////剑指offer面试题06：从尾到头打印链表
////输入一个链表的头节点，从尾到头反过来返回每个节点的值（用数组返回）。
////---------------------------------------------------------
////解题思路：深度优先遍历(递归)/栈
////---------------------------------------------------------
////作者:Mxd
////时间：2020/05/24
////----------------------------------------------------------
//#include<iostream>
//#include<vector>
//using namespace std;
//struct ListNode {
//   int val;
//   ListNode *next;
//   ListNode(int x) : val(x), next(NULL) {}
//};
// 
//class Solution {
//private:
//    vector<int> res;
//public:
//    vector<int> reversePrint(ListNode* head) {
//        if (head != NULL)
//        {
//            reversePrint(head->next);
//            res.push_back(head->val);
//        }
//        return res;
//    }
//};
//int main()
//{
//    vector<int> nums = { 1,3,2 };
//    ListNode* head = new ListNode(nums[0]);
//    ListNode* s = head;
//    for (int i = 1; i < nums.size(); i++)
//    {
//        s->next = new ListNode(nums[i]);
//        s = s->next;
//    }
//    Solution S;
//    auto f = S.reversePrint(head);
//}
