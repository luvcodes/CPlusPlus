#include <iostream>
using namespace std;

class C1
{
    int m_A; // 默认权限 是private
};

struct C2
{
    int m_A; // 默认权限 是public
};

int main()
{
    // struct和class的区别
    // struct 默认权限是 public
    // class 默认权限是 private
    C1 c1;
    // c1.m_A = 100; // 在class里默认权限为private，因此不可以访问

    struct C2 c2;
    c2.m_A = 100; // 在struct默认的权限为public，因此可以访问

    return 0;
}