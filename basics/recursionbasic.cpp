#include<stdio.h>
#include<conio.h>
#include <iostream>

using namespace std;
int cnt=0;
void f(){
    if(cnt==4){
        return;
    }
    cout<<cnt;
    cnt++;
    f();

}
int main(){
f();
  

}

    
    
    
 