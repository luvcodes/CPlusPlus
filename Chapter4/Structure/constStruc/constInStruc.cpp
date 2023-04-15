#include <iostream>
#include <cstring>
using namespace std;

struct student {
    string name;
    int age;
    int score;
};

// 将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出来
// 在形参中加上const，就不会出现使用地址传递中，在函数内修改结构体成员属性，
// 导致实际value修改的情况了。
// 这样就只能读取，不能修改了。
void printStudent(const student * s)
{
    // s->age = 150;
    cout << s->name << " " << s->age << " " << s->score << endl;
}

int main()
{
    struct student s = {"张三", 30, 100};

    // 通过函数打印结构体变量信息
    printStudent(&s);

    return 0;
}