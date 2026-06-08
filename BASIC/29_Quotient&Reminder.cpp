#include<iostream>
using namespace std;    

int main(){
int dividend,divisor;

cout<<"Enter the dividend :"<<endl;
cin>>dividend;
cout<<"Enter the divisor :"<<endl;
cin>>divisor;   


int quotient = dividend / divisor;
int reminder = dividend % divisor;

cout<<"Quotient is : "<<quotient<<endl;
cout<<"Reminder is : "<<reminder<<endl;

    return 0;
}
