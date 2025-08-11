#include<stdio.h>
#include<conio.h>
#include <iostream>

using namespace std;

void f(int cnt){
    if(cnt==0){
        return;
    }
    cout<<cnt<<endl;
    cnt--;
    f(cnt);

}
int main(){
    cout<<"enter n for recursion"<<endl;
    int x;
    cin>>x;
    f(x);
  

}

    
    
    
 