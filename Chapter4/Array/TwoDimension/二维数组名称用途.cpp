#include <iostream>
using namespace std;

int main()
{
    int arr[2][3] = {
            {1,2,3},
            {4,5,6}
    };

    cout << "二维数组占用内存空间为: " << sizeof(arr) << endl;
    cout << "二维数组第一行占用内存为: " << sizeof(arr[0]) << endl;
    cout << "二维数组第一个元素占用内存为: " << sizeof(arr[0][0]) << endl;
    cout << "二维数组有几行: " << sizeof(arr) / sizeof(arr[0]) << endl;
    cout << "二维数组有几列: " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

    // 查看二维数组的首地址
    cout << "二维数组的首地址为: " << arr << endl;
    cout << "二维数组第一行首地址: " << arr[0] << endl;
    cout << "二维数组第二行首地址: " << arr[1] << endl;

    // 当要访问某个元素的地址 需要用'&'
    cout << "二维数组第一个元素首地址: " << &arr[0][0] << endl;
    cout << "二维数组第一个元素首地址: " << &arr[0][1] << endl;

    return 0;
}