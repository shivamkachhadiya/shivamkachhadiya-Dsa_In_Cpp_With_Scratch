#include<stdio.h>
#include<conio.h>
#include <iostream>

using namespace std;
int main(){
    int d;
 
    cin>>d;
       int dum=d;
    int sum=0;
    while(d>0){

       int ld=d%10;
       sum=sum+(ld*ld*ld);

        d=d/10;
       
    }
   if(dum==sum){cout<<"yes this is armstriong number..."<<endl;}else{cout<<"no this is not armstrong number..."<<endl;}
}

    
    
    
 