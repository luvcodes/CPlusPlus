#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    cout << "Enter your score: ";
    cin >> score;
    cout << "Your entered score is " << score <<endl;
    if (score > 600) {
        cout << "Congratulations!" << endl;
    }
    else if (score > 500) {
        cout << "Good work" << endl;
    }
    else if(score > 400) {
        cout << "Yeah" << endl;
    }
    else {
        cout << "Keep it up!" << endl;
    }

    return 0;
}