////-------------------------------------------------------
////��ָoffer������07���ؽ�������
////����ĳ��������ǰ���������������Ľ�������ؽ��ö�������
////���������ǰ���������������Ľ���ж������ظ������֡�
////---------------------------------------------------------
////����˼·���ݹ� �ְ�
////---------------------------------------------------------
////����:Mxd
////ʱ�䣺2020/05/24
////----------------------------------------------------------
//#include<iostream>
//#include<vector>
//using namespace std;
//
//struct TreeNode {
//  int val;
//  TreeNode* left;
//  TreeNode* right;
//  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//class Solution {
//public:
//    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//        if (preorder.size() == 0)
//            return nullptr;
//        int v = preorder[0];
//        preorder.erase(preorder.begin(), preorder.begin() + 1);
//        //������------------------------------------------------------
//        TreeNode* head = new TreeNode(v);
//        auto inoleft = inorder;
//        inoleft.erase(find(inoleft.begin(), inoleft.end(), v), inoleft.end());
//        if (inoleft.size() != 0)
//        {
//            auto preleft = preorder;
//            preleft.erase(preleft.begin() + inoleft.size(), preleft.end());
//            head->left = buildTree(preleft, inoleft);
//        }
//        //������-------------------------------------------------------
//        auto inoright = inorder;
//        inoright.erase(inoright.begin(),find(inoright.begin(), inoright.end(), v) + 1);
//        if (inoright.size() != 0)
//        {
//            auto preright = preorder;
//            preright.erase(preright.begin(), preright.begin() + preright.size() - inoright.size());
//            head->right = buildTree(preright, inoright);
//        }
//        return head;
//    }
//};
//
//int main()
//{
//    vector<int> preorder = { 3,9,20,15,7 };
//    vector<int> inorder = { 9,3,15,20,7 };
//    Solution S;
//    auto res = S.buildTree(preorder, inorder);
//}