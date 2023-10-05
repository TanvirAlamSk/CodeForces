#include<iostream>
using namespace std;

int main(){
    int i,len=0,n,j;
    cin>>n;
    char ch[n][100];

    for(i=0;i<n;i++){
        cin>>ch[i];
    }

    for(i=0;i<n;i++){
        for(j=0; ch[i][j]!= '\0';j++){

        }

        if(j>10){
            cout<<ch[i][0]<<j-2<<ch[i][j-1]<<endl;
        }else{
            cout<<ch[i]<<endl;
        }
    }

}

