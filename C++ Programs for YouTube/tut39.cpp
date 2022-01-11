#include<iostream>
using namespace std;

int main(){
string cars[5] = {"Volvo", "BMW", "Ford"}; // size of array is 5, even though it's only three elements inside it
// cars[3] = "Mazda";
// cars[4] = "Tesla";
for(int i = 0; i < 5; i++) {
  cout << i <<" : " << cars[i] << "\n";
}
return 0;
}

//string cars[5] = {"Volvo", "BMW", "Ford"}; // size of array is 5, even though it's only three elements inside it
// cars[3] = "Mazda";
// cars[4] = "Tesla";