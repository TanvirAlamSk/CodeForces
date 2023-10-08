#include<iostream>
#include<string>
using namespace std;

int main() {

    int num=0,i,n1;
    cin>>n1;
    string st;
    cin>>st;

    for(i=0;i<n1;i++){
        if(st[i] == st[i+1]){
            num++;
        }
    }
cout<<num;

}

