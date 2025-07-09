// Greatest number
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    cout<<"enter c: ";
    cin>>c;
    if(a>b && a>c){
        cout<<"greatest number is:"<<a;
    }
    else if(b>a && b>c){
        cout<<"greatest number is:"<<b;
    }
    else{
        cout<<"greatest number is:"<<c;
    }
}



// leap, vowels, special character - digit-aplhabet, grades 