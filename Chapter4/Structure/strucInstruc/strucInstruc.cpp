#include <iostream>
using namespace std;

struct student {
    string name;
    int age;
    int score;
};

struct teacher {
    int id;
    string name;
    int age;
    struct student stu;
};



int main()
{
    struct teacher t;
    t.id = 10000;
    t.name = "Ryan";
    t.age = 50;
    t.stu.name = "Ted";
    t.stu.age = 20;
    t.stu.score = 60;

    cout << "Teacher name: " << t.name << endl;
    cout << "Teacher id: " << t.id << endl;
    cout << "Teacher age: " << t.age << endl;
    cout << "Teacher tutor student name: " << t.stu.name << endl;
    cout << "Student age: " << t.stu.age << endl;
    cout << "Student score: " << t.stu.score << endl;

    return 0;
}