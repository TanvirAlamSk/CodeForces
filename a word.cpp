#include<iostream>
#include<string>
using namespace std;

int main() {

    int low=0,upp=0,i;
    string st1;
    cin>>st1;
    for(i=0; i<st1.length(); i++) {
        if(st1[i]>=65 && st1[i]<=90) {
            upp++;
        } else {
            low++;
        }
    }
    if(upp>low) {
        for(i=0; i<st1.length(); i++) {
            if(st1[i]>=97 &&  st1[i]<=122){
                st1[i]=st1[i]-32;
            }
        }
        //cout<<upp;
    }else{
        for(i=0; i<st1.length(); i++) {
            if(st1[i]>=65 &&  st1[i]<=90){
                st1[i]=st1[i]+32;
            }
        }
    }
    cout<<st1;

}
