#include<iostream>
using namespace std;

int main(){
int time = 22;
if (time < 10) {
  cout << "Good morning.";
}
if (time < 20) {
  cout << "Good day.";
}
else if(time>10){
  cout << "Good evening.";
}
else{
    cout<<"CRTEK"<<endl;
}
// Outputs "Good evening."
return 0;
}