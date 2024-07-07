#include<iostream>
using namespace std;

int main(){
    int n,i;
    cin>>n;

    for(i=0;i<n;i++){
        if(i>0){
            cout<<" that ";
        }
        if((i+1)%2!=0){
            cout<<"I hate";
        }else{
            cout<<"I love";
        }
    }
cout<<" it";

}
