#include<iostream>
using namespace std;

int main() {
    int year,i=0,a,b,c,d,temp;
    cin>>year;
    year=year+1;

    while(i!=1){
        a=year/1000;
        temp=year%1000;
        b=temp/100;
        temp=temp%100;
        c=temp/10;
        d=temp%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            i=1;
        }else{
            year=year+1;
        }
    }
    cout<<year;
}

