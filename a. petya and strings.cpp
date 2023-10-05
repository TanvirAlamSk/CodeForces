#include<iostream>
#include<cstring>
using namespace std;

int main(){

   string s1,s2;

   cin>>s1>>s2;

   //s1=tolower(s1);
   //s2=tolower(s2);

   for(int i=0;i<strlen(s1);i++){
    tolower(s1[i]);
   }
   cout<<s1;


}

