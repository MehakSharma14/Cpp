// TRIANGLE
//  #include<iostream>
// // using namespace std;
// // int main(){
// //    int n;
// //    cout<<"enter :";
// //    cin>>n;
// //    for(int i=1;i<=n;i++){
// //     for(int j=1;j<=i;j++){
// //         cout<<"* ";
// //     }
// //     cout<<endl;
// //    }
// // }

// SQUARE PATTERN
// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cout<<"enter n:";
//    cin>>n;
//    for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         cout<<"* "<<" ";
//     }
//     cout<<endl;
//    }
// }

// INVERTED TRIANGLE
// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cout<<"enter n:";
//    cin>>n;
//    for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<"* ";
//     }
//     cout<<endl;
//    }
// }

// Mirrored triangle
//  #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cout<<"enter n:";
//    cin>>n;
//    for(int i=0;i<n;i++){
//         for(int j=0;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int k=0;k<=i;k++){
//             cout<<"*";
//         }
//         cout<<" "<<endl;
//    }
// }

// Number triangle
// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cout<<"enter n:";
//    cin>>n;
//    for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<i;
//     }
//     cout<<endl;
//    }
// }


// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cout<<"enter n:";
//    cin>>n;
//    for(int i=n;i>=1;i--){
//     for(int j=1;j<=i;j++){
//         cout<<i;
//     }
//     cout<<" "<<endl;
//    }
// }

 #include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter n:";
   cin>>n;
   for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"* ";
        }
        cout<<endl;
   }
}





