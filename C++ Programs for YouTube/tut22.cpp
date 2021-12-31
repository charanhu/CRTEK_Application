#include<iostream>
using namespace std;

int main(){
string fullname;
cout << "Type your first name: ";
getline(cin, fullname);
cout << "Your name is: " << fullname;
return 0;
}