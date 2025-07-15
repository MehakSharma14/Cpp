#include<iostream>
#include<bitset>
using namespace std;
int main(){
    int a;
    cin>>a;
    bitset<4>binary(a);
    cout<<binary;
    int s;
    cin>>s;
    cout<<"bitwise AND:"<<(a&s)<<endl;
    cout<<"bitwise OR:"<<(a|s)<<endl;
    cout<<"bitwise XOR:"<<(a^s)<<endl;
    cout<<"bitwise NOT:"<<(~a)<<endl;
    cout<<"bitwise NOT:"<<(~s)<<endl;
    cout<<"LeftShift :"<<(a<<1)<<endl;
    cout<<"LeftShift :"<<(s<<1)<<endl;
    cout<<"RightShift :"<<(a>>1)<<endl;
    cout<<"RightShift :"<<(s>>1)<<endl;
}