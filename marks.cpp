#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter marks: ";
    cin>>marks;
    if(marks>=90 && marks<=100){
        cout<<"A";
    }
    else if(marks<90 && marks>80){
        cout<<"B";
    }
    else if(marks<80 && marks>70){
        cout<<"C";
    }
    else if(marks<70 &&  marks>60){
        cout<<"D";
    }
    else{
        cout<<"F";
    }
}