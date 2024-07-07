#include<iostream>
using namespace std;

int main(){
    int x,y,i,j,temp;
    cin>>x>>y;
    int arr[y];
    for(i=0;i<y;i++){
        cin>>arr[i];
    }

    //sort
    for(i=0;i<y;i++){
        for(j=i+1;j<y;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    int mindiff=arr[x-1]-arr[0];
    for(i=1;i<y-x+1;i++){
        if((arr[x-1+i]-arr[i])<mindiff){
            mindiff=arr[x-1+i]-arr[i];
        }
    }
    cout<<mindiff;
}
