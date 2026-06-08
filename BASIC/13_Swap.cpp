#include<iostream>
using namespace std;

int mian(){
int a,b;
cout<<"a"<<endl;
cin>>a;
cout<<"b:"<<endl;
cin>>b;

int temp;
temp=b;
b=a;
a=temp;

cout<<"After swapping a and b, the value of a is : "<<a<<endl;
    cout<<"After swapping a and b, the value of b is : "<<b<<endl;
    return 0;
}