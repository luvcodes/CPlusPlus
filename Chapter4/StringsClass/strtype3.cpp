 #include <iostream>
 #include <string> // make string class available
 #include <cstring> // C-style string library
 using namespace std;

 int main()
 {
     char char1[20];
     char char2[20] = "jaguar";
     string str1;
     string str2 = "panther";

     // assignment for string objects and character arrays
     str1 = str2; // copy str2 to str1
     strcpy(char1, char2); // copy char2 to char1

     // appending for string objects and character arrays
     str1 += " paste";
     strcat(char1, " juice"); // add juice to end of char1

     // finding the length of a string object and a C-style string
     int len1 = str1.size();
     int len2 = strlen(char1);

     cout << "The string " << str1 << " contains " << len1 << " characters." << endl;
     cout << "The string " << char1 << " contains " << len2 << " characters." << endl;

     return 0;
 }