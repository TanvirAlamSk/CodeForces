#include<iostream>
using namespace std;

int main()
{
    int i,n,res=0;
    string str;
    cin >>n;
    for(i=0; i<n; i++)
    {
        cin>>str;
        if(str == "++X" || str == "X++")
        {
            res++;
        }
        else
        {
            res--;
        }
    }
    cout<<res;
}

