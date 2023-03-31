#include <iostream>
using namespace std;

double units(double);

int main() {
    double lightyear;
    double unit;
    cout << "Enter the number of light years: ";
    cin >> lightyear;
    unit = units(lightyear);
    cout << lightyear << " light years = " << unit << " astronomical units";

    return 0;
}

double units(double lightyear)
{
    double unit = lightyear * 63240;
    return unit;
}