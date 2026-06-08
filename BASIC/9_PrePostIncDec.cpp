#include<iostream>
using namespace std;

int main(){
int n;
cout<<"n:";
cin>>n;

cout<<"After post increment by 1 , the number is :"<<n++<<endl;
cout<<"After pre increment by 1 , the number is :"<<++n<<endl;
cout<<"After increasing by 1, the number is : "<<n+1<<endl;
cout<<"After post decrement by 1, the number is :"<<n--<<endl;
cout<<"After pre decrement by 1, the number is :"<<--n<<endl;
cout<<"After decreasing by 1, the number is : "<<n-1<<endl;   
return 0;
}