#include<iostream>
using namespace std;

int main(){
    int max,ar[4]={3,2,5,1},i,j;

    for(i=0;i<4;i++){
        for(j=i+1;j<4;j++){
            if(ar[i]>ar[j]){
                max=ar[i];
                ar[i]=ar[j];
                ar[j]=max;
                cout<<i<<"->"<<ar[i]<<" "<<ar[j]<<endl;
            }
        }
    }
    for(i=0;i<4;i++){
        cout<<ar[i]<<" ";
    }
}

