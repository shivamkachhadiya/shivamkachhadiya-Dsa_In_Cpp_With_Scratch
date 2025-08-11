#include<stdio.h>
#include<conio.h>
#include <iostream>

using namespace std;
int main(){
   int x,y,ans1;
   cin>>x;
   cin>>y;
   for(int i=1;i<=y;i++){
    if(x%i==0&&y%i==0){
         ans1=i;
        
    }
   }
   cout<<"GCD is"<<ans1<<endl;


}

    
    
    
 