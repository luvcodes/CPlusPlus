#include <iostream>
using namespace std;

// 打印数据函数
void showValue(const int & val)
{
    // val = 1000; // 不能这样修改了，因为参数是const
    cout << "val = " << val << endl;
}


int main()
{
    // 常量引用
    // 使用场景: 用来修饰形参，放置误操作，放置修改形参值

    // int a = 10; 

    // 加上const之后 编译器将代码修改 int temp = 10; const int & ref = temp;
    // const int & ref = 10; // 引用必须引一块合法的内存空间
    // ref = 20; // 加入const之后变为只读，不可以修改

    int a = 100;
    showValue(a);

    cout << "a = " << a << endl;

    return 0;
}