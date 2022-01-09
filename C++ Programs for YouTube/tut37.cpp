#include<iostream>
using namespace std;

int main(){
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
// cout << cars[2]<<endl;
// Outputs Volvo
cout<<"Before"<<endl;
for (int i = 0; i < 4; i++)
{
   cout<<cars[i]<<endl;
}
cars[2]="Maruti Suzuki";
cout<<"After"<<endl;
for (int i = 0; i < 4; i++)
{
   cout<<cars[i]<<endl;
}
return 0;
}