#include <iostream>
using namespace std;
const int ArrSize = 20;


int main()
{
    char name[ArrSize];
    cout << "Enter your name: ";
    cin >> name;
    int i = 0;
    while (name[i] != '\0') {
        cout << name[i];
        i++;
    }

    return 0;
}