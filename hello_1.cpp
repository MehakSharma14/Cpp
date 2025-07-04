#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter a: "<<endl;
    cin>>a;
    cout<<"enter b: "<<endl;
    cin>>b;
    cout<<"press 1 for addittion"<<endl<<"press 2 for subtraction"<<endl<<"press 3 for multiply"<<endl<<"press 4 for division";
    int ch;
    // cin>>a;
    // cin>>b;
    cin>>ch;
    switch(ch){
        case 1:
        cout<<"result: "<< a+b;
        break;
        case 2:
        cout<<"result: "<< a-b;
        break;
        case 3:
        cout<<"result: "<< a*b;
        break;
        case 4:
        cout<<"result: "<< a/b;
        break;
        default:
        cout<<"error";
        break;
    }
    return 0;
}
