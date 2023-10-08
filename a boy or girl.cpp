#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {

    string st1,st2;
    int i,j,k,len=0;
    cin>>st1;
    //sort(st1.begin(),st1.end());

    for(i=0; i<st1.length(); i++) {
        for(j=i+1; st1[j]!='\0'; j++) {
            if(st1[i]==st1[j]) {
                for(k = j; st1[k] != '\0'; k++) {
                    st1[k] = st1[k + 1];
                }
                j--;
            }
        }
    }

    for(i=0;st1[i]!='\0';i++){
        len++;
    }
    if(len%2 !=0 || len<=0) {
        cout<<"IGNORE HIM!";
    } else {
        cout<<"CHAT WITH HER!";
    }
}

