//-------------------------------------------------------
//剑指offer面试题17. 打印从1到最大的n位数
//输入数字 n，按顺序打印出从 1 到最大的 n 位十进制数。
//比如输入 3，则打印出 1、2、3 一直到最大的 3 位数 999。
//---------------------------------------------------------
//解题思路：暴力解法
//---------------------------------------------------------
//作者:Mxd
//时间：2020/05/28
//----------------------------------------------------------
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> printNumbers(int n) {
        vector<int> ans;
        int a = 1;
        for (int i = 0; i < n; i++)
        {
            a *= 10;
        }
        for (int i = 1; i < a; i++)
        {
            ans.push_back(i);
        }
        return ans;
    }
};
int main()
{
    while (true)
    {
        int n;
        cin >> n;
        auto ans = Solution().printNumbers(n);
        for (auto item : ans)
        {
            cout << item;
        }
        cout << endl;
    }
}