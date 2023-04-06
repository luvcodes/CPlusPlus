#include <iostream>
using namespace std;

int main()
{
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "Chest = " << chest << " (decimal for 42)" << endl;
    cout << hex; // manipulator for changing number base
    cout << "Waist = " << waist << " (hexadecimal 42)" << endl;
    cout << oct; // manipulator for changing number base
    cout << "Inseam = " << inseam << " (octal for 42)" << endl;

    return 0;
}