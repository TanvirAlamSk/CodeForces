#include<iostream>
using namespace std;

int main() {
    int x,i,a=0,d=0;
    string st1;

    cin>>x>>st1;

    for(i=0; i<x; i++) {
        if(st1[i]=='A') {
            a++;
        } else if(st1[i]=='D') {
            d++;
        }
    }

    if(a>d) {
        cout<<"Anton";
    } else if(a<d) {
        cout<<"Danik";
    } else {
        cout<<"Friendship";
    }
}

