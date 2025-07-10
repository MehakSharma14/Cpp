#include<iostream>
using namespace std;
int main(){
    int n,fact = 1;
    cout<<"enter n: ";
    cin>>n;
    if(n<0){
        cout<<"factorial can't be determined";
    }
    else{
        for(int i = 1;i<n;i++){
            fact = fact*i;
        }
        cout<<"factorial: "<<fact;
    }
}