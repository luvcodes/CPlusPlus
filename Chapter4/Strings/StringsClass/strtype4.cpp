 #include <iostream>
 #include <string>
 #include <cstring>
 using namespace std;

 int main()
 {
     char char1[20];
     string str;

     cout << "Length of string in char1 before input: " << strlen(char1) << endl;
     cout << "Length of string in str before input: " << str.size() << endl;

     cout << "Enter a line of text:\n";
     cin.getline(char1, 20); // indicate maximum length
     cout << "You entered: " << char1 << endl;

     cout << "Enter another line of text:\n";
     getline(cin, str); // cin now an argument; no length specifier
     cout << "You entered: " << str << endl;

     cout << "Length of string in char1 after input: " << strlen(char1) << endl;
     cout << "Length of string in str after input: " << str.size() << endl;

     return 0;
 }