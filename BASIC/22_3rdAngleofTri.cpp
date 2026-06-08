#include<iostream>
using namespace std;

int main(){

    int firstangle,secondangle;
    cout<<"Enter the value of first angle of triangle :"<<endl;
    cin>>firstangle;
    cout<<"Enter the value of the second angle of triangle :"<<endl;
    cin>>secondangle;

    int thridangle = 180 - (firstangle + secondangle);
cout<<"the value of third angle is : "<<thridangle<<endl;
    return 0;
}