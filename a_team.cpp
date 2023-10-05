#include<iostream>
using namespace std;

int main(){
   int n,p,m=0;
   cout<<"The number of problems : ";
   cin>>n;

if(1<=n && n<=1000){
        for(int i=0;i<n;i++){
            int a=0;

        for(int j=0;j<3;j++){
            //cout<<" ";
            cin>>p;

            if(p==1){
                a++;
            }
        }

        cout<<endl;

        if(a>1){
            m++;
        }
    }
}

    cout<<endl;
    cout<<m;

}

