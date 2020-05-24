////-------------------------------------------------------
////剑指offer面试题03：数组中重复中的都数字
////在一个长度为 n 的数组 nums 里的所有数字都在 0～n-1 的范围内。
////数组中某些数字是重复的，但不知道有几个数字重复了，也不知道每个数字重复了几次。
////请找出数组中任意一个重复的数字。
////---------------------------------------------------------
////解题思路：利用状态表，当状态不对时返回
////---------------------------------------------------------
////作者:Mxd
////时间：2020/05/24
////----------------------------------------------------------
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//class Solution {
//public:
//    int findRepeatNumber(vector<int>& nums) {
//        //取消cin cout等和stdio的关联 用于提升速度
//        std::ios::sync_with_stdio(false);
//        vector<bool> flags = vector<bool>(nums.size(), false);
//        for (int i = 0; i < nums.size(); i++)
//        {
//            if (flags[nums[i]] == false)
//                flags[nums[i]] = true;
//            else
//                return nums[i];
//        }
//    }
//};
//int main()
//{
//    vector<int> nums = {1,2,1};
//    Solution S;
//    cout << S.findRepeatNumber(nums) << endl;
//}