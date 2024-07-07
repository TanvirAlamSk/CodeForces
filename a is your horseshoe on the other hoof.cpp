#include<iostream>
using namespace std;

int main(){
    int i,j,arr[4],m=0,res=0;

    for(i=0;i<4;i++){
        cin>>arr[i];
        for(j=i-1;j>=0;j--){
            if(arr[j]==arr[i]){
                m++;
            }
        }
        if(res<m){
            res=m;
            m=0;
        }else if(res==m){
            res=m+m;
            m=0;
        }
    }
    cout<<res;

}
