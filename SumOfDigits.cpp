#include<iostream>
using namespace std;
int main(){
    int a,sum =0, ld;
    cout<<"enter a: ";
    cin>>a;
    while(a!=0){
        ld = a%10;
        sum = sum + ld;
        a = a /10;
    }
    cout<<"sum of digit"<< sum;
}