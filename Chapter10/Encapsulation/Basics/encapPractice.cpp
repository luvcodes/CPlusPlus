#include <iostream>
using namespace std;
#include <string>

class Student
{
public:

    // 类中的属性和行为 我们统一称为 成员
    // 属性 成员属性 成员变量
    // 行为 成员函数 成员方法

    string name;
    int m_Id;
    void showStudent()
    {
        cout << "Name: " << name << " Id: " << m_Id << endl;
    }

    void setName(string name) {
        name = name;
    }

    void setId(int id) {
        m_Id = id;
    }
};

int main()
{
    Student student;
    // student.name = "Ryan";
    student.setName("Ryan");
    // student.m_Id = 1;
    student.setId(1);
    student.showStudent();

    Student student2;
    student2.name = "Amy";
    student2.m_Id = 2;
    student2.showStudent();

    return 0;
}