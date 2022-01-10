#include<iostream>
using namespace std;

int main(){
string cars[4];
cout<<"Enter 4 array elemts"<<endl;
for (int j = 0; j < 4; j++)
{
    cin>>cars[j];
}
cout<<"elemts of array are: "<<endl;
for(int i = 0; i < 4; i++) {
  cout << i <<" : " << cars[i] << "\n";
}
return 0;
}