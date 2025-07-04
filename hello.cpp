// Even and Odd
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter number:";
    cin>>num;
    if(num%2==0){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }

    return 0;
}

// prime number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    int a =0;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(a==0){
        cout<<"prime";
    }
    else{
        cout<<"odd";
    }
    return 0;
}