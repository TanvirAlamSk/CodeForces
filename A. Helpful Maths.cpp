#include<iostream>
#include<string>

using namespace std;

int main() {

    string s1;
    char temp;
    cin>>s1;

    for(int i=0; i<s1.length(); i++) {
        for(int j=i+1; j<s1.length(); j++) {
            if(s1[j] != '+' && s1[i] != '+' && s1[i]>s1[j]) {
                temp=s1[i];
                s1[i]=s1[j];
                s1[j]=temp;
            }
        }
    }

    for(int i=0;i<s1.length();i++){
        cout<<s1[i];
    }
}

