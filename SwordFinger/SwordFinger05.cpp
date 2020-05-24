////-------------------------------------------------------
////剑指offer面试题05：替换空格
////请实现一个函数，把字符串 s 中的每个空格替换成"%20"。
////---------------------------------------------------------
////解题思路：暴力
////---------------------------------------------------------
////作者:Mxd
////时间：2020/05/24
////----------------------------------------------------------
//#include<iostream>
//#include<vector>
//#include <string>
//using namespace std;
//class Solution {
//public:
//    string replaceSpace(string s) {
//        for (int i = 0; i < s.size(); i++)
//        {
//            if (s[i] == ' ')
//            {
//                s.insert(s.begin() + i++, '%');
//                s.insert(s.begin() + i++, '2');
//                s.insert(s.begin() + i++, '0');
//                s.erase(i--,1);
//            }
//        }
//        return s;
//    }
//};
//int main()
//{
//    while (true)
//    {
//        string s = "";
//        getline(cin, s);
//        Solution S;
//        cout << S.replaceSpace(s) << endl;
//    }
//}