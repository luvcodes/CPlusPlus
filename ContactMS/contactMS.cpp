#include <iostream>
#include <string>
using namespace std;
#define MAX 1000

// 设计联系人的结构体
struct Person
{
    string m_Name;
    int m_sex;
    int m_Age;
    string m_Phone;
    string m_Addr;
};

// 设计通讯录的结构体
struct Addressbooks
{
    struct Person personArray[MAX]; // 通讯录中保存的联系人数组
    int m_Size;                     // 通讯录中人员个数
};

// 1.添加联系人
void addPerson(Addressbooks *abs)
{
    // 判断通讯录是否已满，如果满了就不再添加
    if (abs->m_Size == MAX)
    {
        cout << "通讯录已满，无法添加" << endl;
        return;
    }
    else
    {
        // 添加具体联系人
        // 姓名
        string name;
        cout << "请输入姓名: ";
        cin >> name;
        abs->personArray[abs->m_Size].m_Name = name;

        // 性别
        cout << "请输入性别: ";
        cout << "\n1 ------ 男" << endl;
        cout << "2 ------ 女" << endl;
        int sex = 0;

        while (true)
        {
            // 如果输入的是1或者2 可以退出循环，因为输入的是正确值
            // 如果输入的有误，重新输入
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->personArray[abs->m_Size].m_sex = sex;
                break;
            }
            cout << "输入有误 请重新输入" << endl;
        }

        // 年龄
        cout << "请输入年龄: ";
        int age;
        cin >> age;
        abs->personArray[abs->m_Size].m_Age = age;

        // 电话
        cout << "请输入联系电话: ";
        string phone;
        cin >> phone;
        abs->personArray[abs->m_Size].m_Phone = phone;

        // 家庭住址
        cout << "请输入家庭住址: ";
        string address;
        cin >> address;
        abs->personArray[abs->m_Size].m_Addr = address;

        // 更新通讯录人数
        abs->m_Size++;

        cout << "添加成功" << endl;

        system("cls");
    }
}

// 1. 显示菜单界面
void showMenu()
{
    cout << "*****************************" << endl;
    cout << "*****   1. 添加联系人   *****" << endl;
    cout << "*****   2. 显示联系人   *****" << endl;
    cout << "*****   3. 删除联系人   *****" << endl;
    cout << "*****   4. 查找联系人   *****" << endl;
    cout << "*****   5. 修改联系人   *****" << endl;
    cout << "*****   6. 清空联系人   *****" << endl;
    cout << "*****   0. 退出通讯录   *****" << endl;
    cout << "*****************************" << endl;
}

int main()
{
    int select = 0; // 创建一个用户选择输入的变量

    // 创建一个通讯录的结构体变量
    struct Addressbooks abs;
    // 初始化通讯录中当前人员个数
    abs.m_Size = 0;

    while (true)
    {
        showMenu();
        cin >> select;
        switch (select)
        {
        case 1:              // 1. 添加联系人
            addPerson(&abs); // 利用地址传递，可以修饰实参
            break;
        case 2: // 2. 显示联系人
            break;
        case 3: // 3. 删除联系人
            break;
        case 4: // 4. 查找联系人
            break;
        case 5: // 5. 修改联系人
            break;
        case 6: // 6. 清空联系人
            break;
        case 0: // 0. 退出通讯录
            cout << "欢迎下次使用" << endl;
            return 0;
            break;
        default:
            break;
        }
    }

    return 0;
}