#include<stdio.h>
#include<conio.h>
#include <iostream>

using namespace std;
int main(){
   cout<<"enter number";
   int x;
   cin>>x;
   int count=0;
   for(int i=1;i<=x;i++){
    if(x%i==0){count++;}
   }
   if(count==2){
    cout<<"this is prime number...";
   }else{
    cout<<"this is not a prime number";
   }

}

    
    
    
 