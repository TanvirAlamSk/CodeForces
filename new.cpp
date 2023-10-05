#include<iostream>
using namespace std;

int main(){

    int i,len=0,n,j;
    cin>>n;
    string ch[n];

    for(i=0;i<n;i++){
        cin>>ch[i];
    }

    for(i=0;i<n;i++){
          string str= ch[i];
        for(j=0; str[j]!= '\0';j++){

        }

        if(j>10){
            cout<<str[0]<<j-2<<str[j-1]<<endl;
        }else{
            cout<<str<<endl;
        }
    }

}

