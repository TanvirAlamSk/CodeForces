#include<iostream>
using namespace std;

int main()
{
    int arr[5][5],i,j,m,n;

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            cin>>arr[i][j];
        }
    }

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(arr[i][j]==1)
            {
                if(i>2)
                {
                    m=i-2;
                }else{
                    m=2-i;
                }
                if(j>2){
                    n=j-2;
                }else{
                    n=2-j;
                }
            }
        }
    }
    cout<<m+n;
}

