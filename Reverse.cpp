#include<iostream>
using namespace std;
int main(){
    int a,r =0, ld;
    cout<<"enter a: ";
    cin>>a;
    while(a!=0){
        ld = a%10;
        r = r*10 + ld;
        a = a /10;
    }
    cout<<"Reverse of digit"<< r;
}