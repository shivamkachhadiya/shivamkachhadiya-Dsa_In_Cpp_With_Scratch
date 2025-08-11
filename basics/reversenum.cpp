#include<stdio.h>
#include<conio.h>
#include <iostream>

using namespace std;
int main(){
    int d;
    cin>>d;
    int revnum=0;
    while(d!=0){

       int ld=d%10;
       revnum=(revnum*10)+ld;
        d=d/10;
    }
    cout<<revnum;
}

    
    
    
 