#include<iostream>
using namespace std;

int main(){
string food = "Pizza";
string &meal = food;
// string &after = meal;

cout << "food " << food << "\n";  // Outputs Pizza
cout << "meal " << meal << "\n";  // Outputs Pizza
// cout << "after " << after << "\n";  // 

meal="youtube";

cout << "food " << food << "\n";  // Outputs youtube
cout << "meal " << meal << "\n";  // Outputs youtube
// cout << "after " << after << "\n";  // 

cout<<(meal==food)<<endl;

return 0;
}