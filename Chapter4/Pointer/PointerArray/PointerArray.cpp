#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    int * p = arr; // arr就是数组首地址

    cout << "Use pointer to access the first element of the array: " << *p << endl;

    p++;
    
    cout << "Use pointer to access the second element of the array: " << *p << endl;

    cout << "Use pointer to iterate array: " << endl;

    int * p2 = arr;

    for (int i = 0; i <  10; i++)
    {
        // cout << arr[i] << endl;
        cout << *p2;
        p2++;
        cout << " ";
    }

    return 0;
}