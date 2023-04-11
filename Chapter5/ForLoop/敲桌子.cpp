#include <iostream>
using namespace std;

int main()
{
    // 1. 先输出1-100

    for (int i = 1; i <= 100; i++) {
        // 2. 从这100个数字中找到特殊数字，改为敲桌子
        // 特殊数字：7的倍数 个位有7 十位有7
        if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7) {
            cout << "敲桌子" << endl;
        }
        else {
            cout << i << endl;
        }
    }

    return 0;
}