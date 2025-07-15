#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;
    int arr[] = {a,b,c};
    int s = sizeof(arr)/sizeof(arr[0]);
    // find largest and greatest number
    if(a>b&&a>c){
        cout<<"greater no."<<a<<endl;
    }
    else if(b>a&&b>c){
        cout<<"greater no."<<b<<endl;
    }
    else if(c>a&&c>b){
        cout<<"greater no."<<c<<endl;
    }
    if(a<b&&a<c){
        cout<<"smallest no."<<a<<endl;
    }
    else if(b<a&&b<c){
        cout<<"smallest no."<<b<<endl;
    }
    else if(c<a&&c<b){
        cout<<"smallest no."<<c<<endl;
    }

    // sorting in ascending and descending order
    sort(arr,arr+s);
    cout<<"ascending:";
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" "<<endl;
    }
    cout<<"descending:";
    for(int i=s-1;i>=0;i--){
        cout<<arr[i]<<" "<<endl;
    }
    return 0;
}