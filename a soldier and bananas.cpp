#include<iostream>
using namespace std;

int main(){
    int fprice,taka,banana,amount=0,i,price;
    cin>>fprice>>taka>>banana;

    for(i=0;i<banana;i++){
        price=(i+1)*fprice;
        amount=amount+price;
    }
    if((amount-taka)>0){
        cout<<amount-taka;
    }else{
        cout<<0;
    }
}

