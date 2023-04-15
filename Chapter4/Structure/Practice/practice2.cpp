#include <iostream>
using namespace std;
#include <string>

struct champion
{
    string name;
    int age;
    string gender;
};

void BubbleSort(struct champion cArray[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            // 如果j下表的元素年龄 大于 j+1下表的元素的年龄，交换两个元素
            if (cArray[j].age > cArray[j + 1].age)
            {
                struct champion temp = cArray[j];
                cArray[j] = cArray[j + 1];
                cArray[j + 1] = temp;
            }
        }
    }
}

void printChampion(struct champion cArray[], int len)
{
    for (int i = 0; i < len; i++) {
        cout << "Name: " << cArray[i].name << " age: " << cArray[i].age << " gender:" << cArray[i].gender << endl;
    }

}

int main()
{
    // 设计英雄结构体

    // 创建数组存放5名英雄
    struct champion cArray[5] = {
        {"刘备", 23, "男"},
        {"关羽", 22, "男"},
        {"张飞", 20, "男"},
        {"赵云", 21, "男"},
        {"貂蝉", 19, "女"},
    };
    int len = sizeof(cArray) / sizeof(cArray[0]);
    // for (int i = 0; i < len; i++)
    // {
    //     cout << "Name: " << cArray[i].name << " age: " << cArray[i].age << " gender:" << cArray[i].gender << endl;
    // }

    cout << endl;

    // 对数组进行排序，按照年龄进行排序
    BubbleSort(cArray, len);

    // 打印
    printChampion(cArray, len);


    return 0;
}