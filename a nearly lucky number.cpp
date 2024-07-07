#include<iostream>
using namespace std;

int main() {
    int i,num,res=0;
    cin>>num;

    while(num>0) {
        if(num%10 == 4 || num%10 ==7){
            res++;
            cout<<endl<<res<<" "<<num;
        }
        num=num/10;
    }
cout<<endl;
    if(res==4 || res==7 ){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    //cout<<endl<<res;
}
