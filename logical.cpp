#include<iostream>
using namespace std;
int main(){
    int age, salary;
    cout<<"enter age: ";
    cin>>age;
    cout<<"enter salary: ";
    cin>>salary;
    if(age>=18 && salary>=30000){
        cout<<"Eligible for loan";
    }
    else{
        cout<<"Not Eligible";
    }
}