////-------------------------------------------------------
////剑指offer面试题09： 用两个栈实现队列
////用两个栈实现一个队列。队列的声明如下，请实现它的两个函数 appendTail 和 deleteHead ，
////分别完成在队列尾部插入整数和在队列头部删除整数的功能。
////(若队列中没有元素，deleteHead 操作返回 -1 )
////---------------------------------------------------------
////解题思路：删除时进行栈数据的导换工作
////---------------------------------------------------------
////作者:Mxd
////时间：2020/05/26
////----------------------------------------------------------
//#include<iostream>
//#include<stack>
//using namespace std;
//
//class CQueue {
//private:
//    stack<int> _one;
//    stack<int> _two;
//public:
//    CQueue() {
//    }
//
//    void appendTail(int value) {
//        _one.push(value);
//    }
//
//    int deleteHead() {
//        if (_one.size() == 0)
//            return -1;
//        while (_one.size() != 1)
//        {
//            _two.push(_one.top());
//            _one.pop();
//        }
//        int ans = _one.top();
//        _one.pop();
//        while (_two.size() != 0)
//        {
//            _one.push(_two.top());
//            _two.pop();
//        }
//        return ans;
//    }
//};
//
//int main()
//{
//    CQueue cquenue;
//    cout << cquenue.deleteHead() << endl;
//    cquenue.appendTail(5);
//    cquenue.appendTail(2);
//    cout << cquenue.deleteHead() << endl;
//    cout << cquenue.deleteHead() << endl;
//    cout << cquenue.deleteHead() << endl;
//    cout << cquenue.deleteHead() << endl;
//}