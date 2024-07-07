#include<iostream>
using namespace std;

int main(){
    int n,i,temp,j,m;
    cin>>n;
    int arr[n];

    for(i=0;i<n;i++){
        cin>>m;
        arr[m-1]=i+1;
    }


    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

