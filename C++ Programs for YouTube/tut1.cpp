#include<iostream>
using namespace std;

int main(){

    int a=4;
    int *ptr=&a;
    cout<<"value of a="<<*ptr<<endl;

    int *arr=new int[5];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=30;
    arr[4]=40;
    arr[5]=60;
    arr[6]=60;
    arr[10]=10;
    arr[111]=20;
    arr[21]=30;
    arr[31]=30;
    arr[41]=40;
    arr[51]=60;
    arr[61]=60;
    for(int i=0; i<(sizeof(arr)-1); i++){
        cout<<arr[i]<<endl;
    }

return 0;
}