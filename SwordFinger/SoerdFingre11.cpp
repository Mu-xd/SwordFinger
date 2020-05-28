﻿////-------------------------------------------------------
////剑指offer面试题11. 旋转数组的最小数字
////把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。
////输入一个递增排序的数组的一个旋转，输出旋转数组的最小元素。
////例如，数组 [3,4,5,1,2] 为 [1,2,3,4,5] 的一个旋转，该数组的最小值为1。 
////---------------------------------------------------------
////解题思路：二分法
////---------------------------------------------------------
////作者:Mxd
////时间：2020/05/28
////----------------------------------------------------------
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    int minArray(vector<int>& numbers) {
//        int r = numbers.size() - 1, l = 0;
//        while (l<r)
//        {
//            int mid = l + ((r - l) >> 1);//这种写法防止溢出
//            if (numbers[mid] > numbers[r])
//                l = mid + 1;
//            else if (numbers[mid] < numbers[r])
//            {
//                r = mid;//这里要注意一下 不能-1 -1之后可能会忽略掉原本的最小值
//            }
//            else
//                r--;
//        }
//        return numbers[r];
//    }
//};
//
//int main()
//{
//    vector<int> numbers = {3,4,5,1,2,2,3};
//    cout << Solution().minArray(numbers) << endl;
//}