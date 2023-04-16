#include <iostream>
using namespace std;
#include <string>
#define MAX 1000


// 联系人结构体
struct Person {
    string m_Name;
    int m_Sex;
    int m_Age;
    string m_Phone;
    string m_Addr;
};

struct Addressbooks {
    struct Person personArray(MAX);
    // 通讯录中人员个数
    int m_Size;
};

void addPerson(Addressbooks * abs)
{
    // 判断通讯录是否已满，如果满了就不再添加
    if (abs->m_Size == MAX) {
        cout << "Contact is full, cannot add contacts" << endl;
        return;
    }
    else
    {
        // 添加具体联系人
        // 姓名
        string name;
        cout << "Please enter your name: ";
        cin >> name;
        abs->personArray(abs->m_Size).m_Name = name;

        // 性别
        cout << "Please enter your gender: ";
        cout << "1 --- Male" << endl;
        cout << "2 --- Female" << endl;
        int sex = 0;
        while (true)
        {
            cin >> sex;
            if (sex == 1 || sex == 2) {
                abs->personArray(abs->m_Size).m_Sex = sex;
                break;
            }
            cout << "Error input, please enter again" << endl;
        }

        // 年龄


        // 电话


        // 住址


    }
}

void showMenu()
{
    cout << "***********************" << endl;
    cout << "****  Add contacts  ***" << endl;
    cout << "****  View contacts  **" << endl;
    cout << "****  Delete Contacts *" << endl;
    cout << "****  Search contacts**" << endl;
    cout << "****  Edit contacts****" << endl;
    cout << "****  Exit contacts****" << endl;
    cout << "***********************" << endl;
}

int main()
{
    // 创建通讯录结构体变量
    Addressbooks abs;
    // 初始化通讯录中当前人员个数
    abs.m_Size = 0;


    int select = 0;
    while (true)
    {
        showMenu();
        cin >> select;
        switch (select) {
            case 1:
                addPerson(&abs); // 利用地址传递可以修饰形参
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 0:
                cout << "Comeback again" << endl;
                return 0;
                break;
            default:
                break;
        }
    }

    return 0;
}