// Pattern 1: Basic square

// 5
//  *  *  *  *  * 
//  *  *  *  *  * 
//  *  *  *  *  * 
//  *  *  *  *  * 
//  *  *  *  *  * 

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}





// Pattern 2: Basic Rectangle

// 4 5
//  *  *  *  * 
//  *  *  *  * 
//  *  *  *  * 
//  *  *  *  * 
//  *  *  *  * 

// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>m>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<" * ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// Pattern 3: Triangle 


// 5
//  * 
//  *  * 
//  *  *  * 
//  *  *  *  * 
//  *  *  *  *  * 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<" * ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// Pattern 4: Triangle with numbers

// 5
//  1 
//  2  2 
//  3  3  3 
//  4  4  4  4 
//  5  5  5  5  5 

// for(int j=1;j<=i;j++){ 
//     cout<<" "<<j<<" ";
// }

// 5
//  1 
//  1  2 
//  1  2  3 
//  1  2  3  4 
//  1  2  3  4  5 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<" "<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// Pattern 5: Reversed triangle

// 5
//  5  5  5  5  5 
//  4  4  4  4 
//  3  3  3 
//  2  2 
//  1 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=n;i>0;i--){
//         for(int j=1;j<=i;j++){
//             cout<<" "<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }




