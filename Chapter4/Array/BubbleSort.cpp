#include <iostream>
using namespace std;

int main()
{
    // 比较相邻的元素。如果第一个比第二个大，就交换他们两个
    // 对每一对相邻的元素做同样的工作，执行完毕后，找到第一个最大值
    // 重复以上步骤，每次比较次数 - 1，直到不需要比较

    // 排序总轮数 = 元素个数 - 1
    // 每轮对比次数 = 元素个数 - 当前轮数 - 1

    int arr[9] = {2,4,0,5,7,1,3,8,9};
    cout << "排序前: " << endl;
    for (int i = 0; i < 9; i++) {
        cout << arr[i] << endl;
    }
    cout << endl;

    // 开始冒泡排序
    // 总共排序轮数为 元素个数 - 1
    for (int i = 0; i < 9 - 1; i++) {
        // 内层循环对比 次数 = 元素个数 - 当前轮数 - 1
        for (int j = 0; j = 9 - i - 1; j++) {
            // 如果第一个数字比第二个数字大，交换两个数字
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }


    return 0;
}