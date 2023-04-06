#include <iostream>
using namespace std;

int stonetolb(int);

//int main()
//{
//    int stone;
//    cout << "Please enter your weight in stone: ";
//    cin >> stone;
//    int pounds = stonetolb(stone);
//
//    int aunt = stonetolb(20);
//    int aunts = aunt + stonetolb(10);
//    cout << "Aunts weights: " << aunts << " pounds." << endl;
//    cout << "Ferdie weights " << stonetolb(16) << " pounds." << endl;
//
//    cout << "The weight in stone: " << stone << endl;
//    cout << "The weight in pounds: " << pounds << endl;
//
//    return 0;
//}

int stonetolb(int sts)
{
    int pounds = 14 *sts;
    return pounds;
}