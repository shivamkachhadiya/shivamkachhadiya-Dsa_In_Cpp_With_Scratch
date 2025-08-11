#include<stdio.h>
#include<conio.h>
#include <iostream>

using namespace std;
int main(){
    int d;
    cin>>d;
    int sum=0;
    while(d>0){
        int lastd=d%10;
       
        sum=sum+lastd;

        d=d/10;
        
    }
    cout<<sum;
}

    
    
    
 