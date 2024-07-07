#include<iostream>
using namespace std;

int main() {
    int n,a,b,i,sum=0,pass=0;
    cin>>n;
    for(i=0; i<n; i++) {
        cin>>a>>b;
        sum=sum-a+b;
        if(pass<sum){
                pass=sum;
        }
    }
    cout<<pass;
}

