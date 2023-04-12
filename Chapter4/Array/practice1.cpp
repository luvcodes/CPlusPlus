#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {300, 350, 200, 400, 250};
    // 访问数组中每个元素，如果这个元素比我认定的最大值要大，更新最大值
    int max = 0;
    for (int i = 0; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << max << endl;
}