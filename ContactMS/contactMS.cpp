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

// 2.添加联系人
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
    }
}

// 3.显示所有联系人
void showPerson(Addressbooks *abs)
{
    // 判断通讯录中人数是否为0，如果为9，提示记录为空
    // 如果不为0，显示记录的联系人信息
    if (abs->m_Size == 0)
    {
        cout << "当前记录为空" << endl;
    }
    else
    {
        for (int i = 0; i < abs->m_Size; i++)
        {
            cout << "Name: " << abs->personArray[i].m_Name << "\t";
            cout << "Sex: " << (abs->personArray[i].m_sex == 1 ? "Male" : "Female") << "\t";
            cout << "Age: " << abs->personArray[i].m_Age << "\t";
            cout << "Phone: " << abs->personArray[i].m_Phone << "\t";
            cout << "Address: " << abs->personArray[i].m_Addr << endl;
        }
    }
}

// 4. 删除联系人
// 检测联系人是否存在，如果存在，返回联系人所在数组中的具体位置，不存在返回-1
// 参数1 通讯录 参数2 对比姓名
int isExist(Addressbooks *abs, string name)
{
    for (int i = 0; i < abs->m_Size; i++)
    {
        // 找到用户输入的姓名了
        if (abs->personArray[i].m_Name == name)
        {
            return i; // 找到了，返回这个人在数组中的下标编号
        }
    }
    return -1; // 如果遍历结束都没有找到，返回-1
}

// 删除指定联系人
void deletePerson(Addressbooks *abs)
{
    cout << "请输入您要删除的联系人" << endl;

    string name;
    cin >> name;

    // ret == -1 未查到
    // ret != -1 查到了
    int ret = isExist(abs, name);

    if (ret != -1)
    {
        // 查找到人，要进行删除的操作
        for (int i = ret; i < abs->m_Size; i++)
        {
            // 数据迁移
            abs->personArray[i] = abs->personArray[i + 1];
        }
        abs->m_Size--; // 更新通讯录中的人员数
        cout << "Successfully delete" << endl;
    }
    else
    {
        cout << "No such person" << endl;
    }

    // system("pause");
    // system("cls");
}

// 5. 查找指定联系人信息
void findPerson(Addressbooks *abs)
{
    cout << "Please enter the name of the target contact: ";
    string name;
    cin >> name;
    // 判断置顶的联系人是否存在通讯录中
    int ret = isExist(abs, name);
    if (ret != -1) // 找到联系人
    {
        cout << "Name: " << abs->personArray[ret].m_Name << "\t";
        cout << "Sex: " << abs->personArray[ret].m_sex << "\t";
        cout << "Age: " << abs->personArray[ret].m_Age << "\t";
        cout << "Phone: " << abs->personArray[ret].m_Phone << "\t";
        cout << "Address: " << abs->personArray[ret].m_Addr << endl;
    }
    else
    {
        cout << "No such person" << endl;
    }

    // 任意键按下后 清屏
    // system("pause");
    // system("cls");
}

// 5. 修改置顶联系人信息
void modifyPerson(Addressbooks *abs)
{
    cout << "Please enter the target editing contact name: ";
    string name;
    cin >> name;

    int ret = isExist(abs, name);
    if (ret != -1) // 找到指定联系人
    {
        // name
        string name;
        cout << "Please enter name: ";
        cin >> name;
        abs->personArray[ret].m_Name = name;

        // age
        int age;
        cout << "Please enter age: ";
        cin >> age;
        abs->personArray[ret].m_Age = age;

        // sex
        cout << "Please enter sex: ";
        cout << "\n1 --- Male" << endl;
        cout << "2 --- Female" << endl;
        int sex = 0;
        while (true)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->personArray[ret].m_sex = sex;
                break;
            }
            cout << "Wrong input, please try again." << endl;
        }

        // phone
        string phone;
        cout << "Please enter a phone number: ";
        cin >> phone;
        abs->personArray[ret].m_Phone = phone;

        // address
        string address;
        cout << "Please enter a address: ";
        cin >> address;
        abs->personArray[ret].m_Addr = address;

        cout << "Successfully edited" << endl;
    }
    else // 未找到联系人
    {
        cout << "No such person" << endl;
    }

    // system("pause");
    // system("cls");
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
            showPerson(&abs);
            break;
        case 3: // 3. 删除联系人
                // {
                //     cout << "Please enter the target deleting contact name: ";
                //     string name;
                //     cin >> name;
                //     if (isExist(&abs, name) == -1)
                //     {
                //         cout << "No such person" << endl;
                //     }
                //     else
                //     {
                //         cout << "Found it!" << endl;
                //     }
                // }

            deletePerson(&abs);
            break;
        case 4: // 4. 查找联系人
            findPerson(&abs);
            break;
        case 5: // 5. 修改联系人
            modifyPerson(&abs);
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