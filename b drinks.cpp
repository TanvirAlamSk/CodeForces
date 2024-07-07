#include<iostream>
using namespace std;

int main(){
    float i,n,m,sum=0,result;
    cin>>n;

    for(i=0;i<n;i++){
        cin>>m;
        sum=sum+m;
    }
    result=sum/n;
cout<<result;
}

