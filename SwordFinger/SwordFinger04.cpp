////-------------------------------------------------------
////��ָoffer������04����ά�����еĲ���
////��һ�� n* m �Ķ�ά�����У�ÿһ�ж����մ����ҵ�����˳������
////ÿһ�ж����մ��ϵ��µ�����˳������
////�����һ������������������һ����ά�����һ���������ж��������Ƿ��и�������
////---------------------------------------------------------
////����˼·�����ַ�
////---------------------------------------------------------
////����:Mxd
////ʱ�䣺2020/05/24
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
