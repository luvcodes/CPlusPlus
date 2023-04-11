#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    cout << "Please enter a score: ";
    cin >> score;
    cout << "Your entered score is: " << score << endl;

    if (score > 600) {
        cout << "Congratulations!" << endl;
    }

//    int score = 0;
//    cout << "Enter your score for exam: ";
//    cin >> score;
//    cout << "The score you entered is " << score << endl;
//
//    if (score > 600) {
//        cout << "Congratulations!" << endl;
//    }
//    else {
//        cout << "No you missed the chance" << endl;
//    }

    return 0;
}