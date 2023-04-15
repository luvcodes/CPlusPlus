#include <iostream>
using namespace std;

struct student
{
    string name;
    int age;
    int score;
};

int main()
{
    // 创建学生结构体变量
    struct student s = {"张三", 18, 100};
    
    // 通过指针指向结构体变量
    struct student * p = &s;

    // 通过指针访问结构体变量中的数据
    // 结构体指针可以通过->操作符 来访问结构体中的成员属性
    cout << "student name: " << p->name << endl;
    cout << "student age: " << p->age << endl;
    cout << "student score: " << p->score << endl;

    return 0;
}