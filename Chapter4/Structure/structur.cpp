#include <iostream>
using namespace std;

struct inflatable {
    char name[20];
    float volume;
    double price;
};

//int main()
//{
//    inflatable guest = {
//            "Glorious Gloria", // name value
//            1.88, // volume value
//            29.99 // price value
//    }; // guest is a structure variable of type inflatable
//    // It's initialized to the indicated values
//    inflatable pal = {
//            "Audacious Arthur",
//            3.12,
//            32.99
//    }; // pal is the second variable of type inflatable
//    cout << "Expand your guest list with " << guest.name;
//    cout << " and " << pal.name << "!\n";
//    cout << "You can have both for $";
//    cout << guest.price + pal.price << "!\n";
//    return 0;
//}