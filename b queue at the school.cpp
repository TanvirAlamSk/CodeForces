#include<iostream>
using namespace std;

int main() {
    string st,temp;
    int i,j,num,sec;
    cin>>num>>sec>>st;

    for(i=0; i<sec; i++) {
        for(j=0; j<num; j++) {
            if(st[j]=='B' && st[j+1]=='G') {
                st[j]='G';
                st[j+1]='B';
                j++;
            }
        }
    }
    cout<<st;
}

