////-------------------------------------------------------
////��ָoffer������03���������ظ��еĶ�����
////��һ������Ϊ n ������ nums ����������ֶ��� 0��n-1 �ķ�Χ�ڡ�
////������ĳЩ�������ظ��ģ�����֪���м��������ظ��ˣ�Ҳ��֪��ÿ�������ظ��˼��Ρ�
////���ҳ�����������һ���ظ������֡�
////---------------------------------------------------------
////����˼·������״̬����״̬����ʱ����
////---------------------------------------------------------
////����:Mxd
////ʱ�䣺2020/05/24
////----------------------------------------------------------
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//class Solution {
//public:
//    int findRepeatNumber(vector<int>& nums) {
//        //ȡ��cin cout�Ⱥ�stdio�Ĺ��� ���������ٶ�
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