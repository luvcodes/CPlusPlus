#include <iostream>
using namespace std;

/**
 * 成员属性设置为私有
 * 1. 可以自己控制读写权限
 * 2. 对于写权限，我们可以检测数据的有效性
 */

class Person
{
public:
    // 设置姓名
    void setName(string name)
    {
        m_Name = name;
    }
    // 获取姓名
    string getName()
    {
        return m_Name;
    }

    // // 获取年龄 只读
    // int getAge() {
    //     m_Age = 0;
    //     return m_Age;
    // }

    // 获取年龄 可读可写 如果想修改(年龄的范围必须是0-150)之间
    int getAge()
    {
        // m_Age = 0; // 初始化为0岁
        return m_Age;
    }

    // 设置年龄
    void setAge(int age) {
        if (age < 0 || age > 150){
            cout << "Wrong age value" << endl;
            return;
        }
        m_Age = age;
    }

    // 设置lover 只写
    void setLover(string lover)
    {
        m_Lover = lover;
    }

private:
    // name 可读可写
    string m_Name;
    // age 只读
    int m_Age;
    // lover 只写
    string m_Lover;
};

int main()
{
    Person p;
    p.setName("ryan");
    cout << "Name: " << p.getName() << endl;

    p.setAge(18);
    cout << "Age: " << p.getAge() << endl;

    p.setLover("Charlotte");

    return 0;
}