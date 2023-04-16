#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int &b = a;
    // 1. 引用必须初始化
    // int &b; // 错误 必须要初始化
    // 2. 引用在初始化后，不可以改变
    int &c = a;
    b = c; // 赋值操作，而不是更改引用

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}