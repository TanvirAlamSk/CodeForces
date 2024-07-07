#include<iostream>
using namespace std;
int main() {
    int m,n,a,p=0,q=0;
     long int i=0,j=0;
    cin>>m>>n>>a;
    while(m>p || n>q) {
        if(m>p){
            i++;
            p=p+a;
        }
        if(n>q){
            j++;
            q=q+a;
        }
    }

    cout<<(double)i*j;
}
