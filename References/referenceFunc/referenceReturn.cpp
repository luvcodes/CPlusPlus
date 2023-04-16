#include <iostream>
using namespace std;

// 引用做函数的返回值
// 1. 不要返回局部变量的引用

// int & test01()
// {
//     int a = 10;

//     return a;
// }

// 2. 函数的调用可以作为左值
int& test02()
{
    static int a = 10; // 静态变量，存放在全局区，全局区上的数据在程序结束后系统释放
    return a;
}

int main()
{
    // int & ref = test01();
    // cout << "ref = " << ref << endl;
    // cout << "ref = " << ref << endl;

    int &ref2 = test02();
    cout << "ref2 = " << ref2 << endl;
    cout << "ref2 = " << ref2 << endl;

    // 因为test02()返回的是a的引用，实际就是1000赋值给a
    // ref2是a的别名，那么也可以访问到1000
    // 如果函数的返回值是引用，这个函数调用可以是左值
    test02() = 1000;
    cout << "ref2 = " << ref2 << endl;
    cout << "ref2 = " << ref2 << endl;

    return 0;
}