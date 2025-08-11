#include<stdio.h>
#include<conio.h>
#include <iostream>

using namespace std;
int main(){
    int d;
    
    cin>>d;
    int x=d;
    int revnum=0;
    while(d>0){

       int ld=d%10;
       revnum=(revnum*10)+ld;
        d=d/10;
    }
   
    if(revnum == x)
    {
        cout<<"yes this is palindrone num...";
    }else{
        cout<<"no this is not palindrone num...";
    }
}

    
    
    
 