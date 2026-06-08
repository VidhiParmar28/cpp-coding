#include<iostream>
#include<math.h>
using namespace std;

int main(){
float l1,l2,l3;
cout<<"Enter the lenght of the first side of the triangle :"<<endl;
cin>>l1;
cout<<"Enter the lenght of the second side of the triangle :"<<endl;
cin>>l2;
cout<<"Enter the lenght of the third side of the triangle :"<<endl;
cin>>l3;    


float s = (l1+l2+l3)/2;
float area = sqrt(s*(s-l1)*(s-l2)*(s-l3));
cout<<"Area of triangle is :"<<area<<endl;      


    return 0;
}