#include<iostream>
using namespace std;
int main(){
int n1,n2,n3,n4;
cout<<"Enter the first number :"<<endl;
cin>>n1;
cout<<"Enter the second number :"<<endl;
cin>>n2;
cout<<"Enter the third number :"<<endl;
cin>>n3;
cout<<"Enter the fourth number :"<<endl;
cin>>n4;

int total =n1+n2+n3+n4;
float average = total / 4.0;
cout<<"Total is : "<<total<<endl;
cout<<"Average is : "<<average<<endl;

    return 0;
}