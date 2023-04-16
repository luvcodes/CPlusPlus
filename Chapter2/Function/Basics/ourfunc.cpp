 #include <iostream>
 using namespace std;

 void simon(int); // function prototyupe

 int main() {
     simon(3);
     int count;
     cin >> count;
     simon(count);

     return 0;
 }

 void simon(int n)
 {
     cout << "Simon says touch your toes " << n << " times." << endl;
 }