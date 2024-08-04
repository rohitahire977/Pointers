#include<iostream>
using namespace std;
//product of two numbers
/*void product(int *ptr1,int *ptr2){
    int z;
    z=(*ptr1)*(*ptr2);
    return;
}*/
int main(){
    int x,y,z;
    cout<<"enter first no.:";
    cin>>x;
    cout<<"enter second no.:";
    cin>>y;
    int* ptr1=&x;
    int* ptr2=&y;
    z=(*ptr1)*(*ptr2);
    cout<<z;
}