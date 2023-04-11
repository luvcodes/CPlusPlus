#include <iostream>
using namespace std;

int main()
{
    char ch;
    int count = 0; // use basic input
    cout << "Enter characters; enter # to quit: " << endl;
    cin >> ch;
    while (ch != '#')
    {
        cout << ch; // echo the character
        ++count; // count the character
        cin >> ch; // get the next character
    }
    cout << endl << count << " characters read\n";
    return 0;
}