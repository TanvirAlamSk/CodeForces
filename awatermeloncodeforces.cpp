#include<iostream>
using namespace std;

int main(){
    int w;
    cin>>w;
int divided=0;
    if(1<=w<=100){
        for(int i=1;i<=w;i++){
            if(i%2==0 && (w-i)%2==0 && w-i>0){
                divided=1;
                break;
            }
        }
    }
    if(divided==1){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}

