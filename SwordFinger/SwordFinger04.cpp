////-------------------------------------------------------
////剑指offer面试题04：二维数组中的查找
////在一个 n* m 的二维数组中，每一行都按照从左到右递增的顺序排序，
////每一列都按照从上到下递增的顺序排序。
////请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。
////---------------------------------------------------------
////解题思路：二分法
////---------------------------------------------------------
////作者:Mxd
////时间：2020/05/24
////----------------------------------------------------------
//#include<iostream>
//#include<vector>
//using namespace std;
//class Solution {
//public:
//    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
//        std::ios::sync_with_stdio(false);
//        for (int i = 0; i < matrix.size(); i++)
//        {
//            if (matrix[i].size() == 0)
//                return false;
//            if (target >= matrix[i][0] && target <= matrix[i][matrix[i].size() - 1])
//            {
//                int mid;
//                int low = 0, high = matrix[i].size() - 1;
//                while (low <= high)
//                {
//                    mid = (low + high) / 2;
//                    if (matrix[i][mid] == target)
//                        return true;
//                    else if (matrix[i][mid] < target)
//                        low = mid + 1;
//                    else
//                        high = mid - 1;
//                }
//            }
//        }
//        return false;
//    }
//};
//int main()
//{
//    vector<vector<int>> matrix = {
//        {} };
//    while (true)
//    {
//        int target = 5;
//        cin >> target;
//        Solution S;
//        cout << S.findNumberIn2DArray(matrix, target) << endl;
//    }
//}
