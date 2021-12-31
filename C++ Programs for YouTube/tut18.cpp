#include<iostream>
using namespace std;

int main(){
string greet = "Good morning ";
string name = "CRTEK";
// string final = greet + " " + name;  //concatenation
string final2 = greet.append("CRTEK CRTEK");
cout<<final2; //append()
return 0;
}