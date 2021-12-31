#include<iostream>
using namespace std;

int main(){
string myString = "Hello";
cout << myString[0]<<endl;
// Outputs e
myString[0]='J';
cout << myString;
return 0;
}