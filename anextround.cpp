#include<iostream>
using namespace std;

int main()
{
    int n,p,i,k=0,sum=0;
    cin>>n>>p;
    int arr[n];

    for (i=0; i<n; i++) {
        cin>>arr[i];
    }

    for(i=0; i<n; i++) {
        if(arr[p-1]<=arr[i] && arr[i]>0 ) {
            k++;
        }
    }
    cout<<k;
}
