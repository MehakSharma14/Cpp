#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter character: ";
    cin>>ch;
    if(ch>='0' && ch<='0'){
        cout<<"Digit";
    }
    else if((ch>='A' && ch<='Z') || (ch>='a'&& ch<='z')){
        cout<<"Alphabet";
    }
    else{
        cout<<"Special character";
    }
}