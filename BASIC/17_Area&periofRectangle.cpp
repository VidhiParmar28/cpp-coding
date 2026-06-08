#include<iostream>
using namespace std;

int main(){

    float l,b;
    cout<<"Enter the value of lenght :"<<endl;
    cin>>l;
    cout<<"Enter the value of breadth :"<<endl;
cin>>b;

float area = l*b;
cout<<"Area of rectangle is :"<<area<<endl;

float perimeter = 2*(l+b);
cout<<"Perimeter of rectangle is :"<<perimeter<<endl;
    return 0;
}