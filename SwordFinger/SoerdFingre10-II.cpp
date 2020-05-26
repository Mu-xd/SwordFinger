////-------------------------------------------------------
////剑指offer面试题10- II. 青蛙跳台阶问题
////一只青蛙一次可以跳上1级台阶，也可以跳上2级台阶。求该青蛙跳上一个 n 级的台阶总共有多少种跳法。
////答案需要取模 1e9 + 7（1000000007），如计算初始结果为：1000000008，请返回 1。
////---------------------------------------------------------
////解题思路：斐波那契数列问题
////---------------------------------------------------------
////作者:Mxd
////时间：2020/05/26
////----------------------------------------------------------
//#include<iostream>
//#include<vector>
//using namespace std;
//class Solution {
//private:
//    vector<long> F = { 1 ,1};
//    //纯递归方法 会导致超时的问题发生
//    int jump(int n)
//    {
//        if (n == 0 || n == 1)
//            return n;
//        int ans = 0;
//        //从这个可以看出这个一个斐波那契额数列的问题
//        ans += jump(n - 1);
//        ans += jump(n - 2);
//        return ans;
//    }
//    //转化为斐波那契数列问题进行求解 要注意初值
//    int fib(int n) {
//        if (n < this->F.size())
//            return this->F[n];
//        for (int i = this->F.size(); i <= n; i++)
//            this->F.push_back((this->F[i - 1] + this->F[i - 2]) % 1000000007);
//        return this->F[n]% 1000000007;
//    }
//public:
//    int numWays(int n) {
//        //return jump(n);
//        return fib(n);
//    }
//};
//
//int main()
//{
//    while (true)
//    {
//        Solution s;
//        int n;
//        cin >> n;
//        cout << s.numWays(n) << endl;
//    }
//}