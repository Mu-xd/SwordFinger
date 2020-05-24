////-------------------------------------------------------
////剑指offer面试题07：重建二叉树
////输入某二叉树的前序遍历和中序遍历的结果，请重建该二叉树。
////假设输入的前序遍历和中序遍历的结果中都不含重复的数字。
////---------------------------------------------------------
////解题思路：递归 分半
////---------------------------------------------------------
////作者:Mxd
////时间：2020/05/24
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
//        //左子树------------------------------------------------------
//        TreeNode* head = new TreeNode(v);
//        auto inoleft = inorder;
//        inoleft.erase(find(inoleft.begin(), inoleft.end(), v), inoleft.end());
//        if (inoleft.size() != 0)
//        {
//            auto preleft = preorder;
//            preleft.erase(preleft.begin() + inoleft.size(), preleft.end());
//            head->left = buildTree(preleft, inoleft);
//        }
//        //右子树-------------------------------------------------------
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