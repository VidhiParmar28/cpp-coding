// sum of the series 1 + 1/2^2 + 1/3^3 + ..+ 1/n^n.

#include<iostream>
#include<math.h>
using namespace std;

int main(){
double n,sum=0;
cout<<"n:";
cin>>n;
for(int i=1;i<=n;i++){
    sum=sum+1/pow(i,i);
}
cout<<"sum:"<<sum;
    return 0;
}