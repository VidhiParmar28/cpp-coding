//  the series (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n).

#include<iostream>
using namespace std;

int main(){
int n,sum=0;
cout<<"n:";
cin>>n;
for(int i=1;i<=n;i++){
 for(int j=0;j<=i;j++){
sum=sum+j;
 }

}
cout<<"sum:"<<sum;
    return 0;
}