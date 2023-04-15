#include <iostream>
#include <cstring>
using namespace std;

// 定义学生结构体
struct student {
    string name;
    int age;
    int score;
};

// 打印学生信息的函数
// 将结构体传入函数参数有两种方式
void printStudent1(struct student s) {
    // s.age = 100;
    cout << "子函数中 姓名: " << s.name << " age: " << s.age << " score: " << s.score << endl;
};

void printStudent2(struct student * s)
{
    // s->age = 200;
    cout << "子函数2中 name: " << s->name << " age: " << s->age << " score: " << s->score << endl;
}

int main()
{
    // 结构体作函数参数
    // 将学生传入到一个参数重，打印学生身上的所有信息
    struct student s;
    s.name = "Ryan";
    s.age = 20;
    s.score = 85;
    // cout << "Student " << s.name << " age: " << s.age << " score: " << s.score << endl;

    // 值传递
    // printStudent1(s);
    // 地址传递
    printStudent2(&s);

    cout << "In main function Student " << s.name << " age: " << s.age << " score: " << s.score << endl;


    return 0;
}