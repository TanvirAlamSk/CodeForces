#include<iostream>
#include<string>
using namespace std;

int main() {
    int i,num,res,x;
    cin>>num>>x;
    for(i=0; i<x; i++) {
        res=num%10;
        if(res==0) {
            num=num/10;
        } else {
            num=num-1;
        }
    }
    cout<<num;
}
