#include<iostream>
using namespace std;

int main(){
    int limak,bob,year=0;
    cin>>limak>>bob;

    while(limak<=bob){
        if(limak<=bob){
            year++;
            limak=limak*3;
            bob=bob*2;
        }
    }
    cout<<year;
}

