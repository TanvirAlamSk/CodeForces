#include<iostream>
using namespace std;

int main(){
    int n,m,c,j=0,k=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m>>c;
        if(m>c){
            j++;
        }
        else if(c>m){
            k++;
        }
    }
    if(j>k){
        cout<<"Mishka";
    }
    else if(k>j){
        cout<<"Chris";
    }
    else{
        cout<<"Friendship is magic!^^";
    }
}
