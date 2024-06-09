#include<iostream>
using namespace std;
//int main(){
    // int n;
    // cout<<"Enter the Number: ";
    // cin>>n;
    // int x=0, y=1,z;
    // for(int i=1;i<=n;i++){
    //     cout<<x<<" ";
    //     z=x+y;
    //     x=y;
    //     y=z;
    // } 
    // return 0;

    // int count=1;
    // for(int i=1;i<=5;i++){   
    //     for(int j=1;j<=5;j++){
    //         cout<<count<<" ";
    //     }
    //     count++;
    //     cout<<endl;
    // }

//     for(int i=1;i<=5;i++){   
//     for(int j=1;j<=5;j++){
//     cout<<i<<" "; 
//      }
//     cout<<endl;
// }


// for( int i=1;i<=5;i++){
//     char name='a'+ i-1;
//     for(int j=1;j<=5;j++){
//         cout<<name<<" ";
//     }
//     cout<<endl;
// }

// for( int i=1;i<=5;i++){
//     for(int j=1;j<=5;j++){
//         char name='a'+ j-1;
//         cout<<name<<" ";
//     }
//     cout<<endl;
// }

// int count=1;
// for (int i=1;i<=5;i++){
//     for(int j=1;j<=5;j++){
//         cout<<count<<"\t";
//         count++;
//     }
//     cout<<endl;
//}
// for (int i=1;i<=5;i++){
//     for(int j=1;j<=5;j++){
//         cout<<(i-1)*5+j<<"\t";
//     }
//     cout<<endl;
// }


// for (int i=1;i<=5;i++){
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

// for (int i=1;i<=5;i++){
//     for(int j=1;j<=i;j++){
//         cout<<j;
//     }
//     cout<<endl;
// }

// for (int i=1;i<=5;i++){
//     for(int j=i;j>=1;j--){
//     cout<<j<<" ";
// }
//    cout<<endl;
// }

// for (int i=1;i<=5;i++){
//     char name='a'+i-1;
//     for(int j=1;j<=i;j++){
//     cout<<name<<" ";
// }
//    cout<<endl;
// }

// for (int i=5;i>=1;i--){
//     for(int j=1;j<=i;j++){
//     cout<<"*"<<" ";
// }
//    cout<<endl;
// }

// for (int i=5;i>=1;i--){
//     for(int j=1;j<=i;j++){
//     cout<<j<<" ";
// }
//    cout<<endl;
// }

// for (int i=1;i<=5;i++){
//     for(int j=5;j>=i;j--){
//     cout<<j<<" ";
// }
//    cout<<endl;
// }

// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=i;j++){
//         cout<<i;
//     }
//     cout<<endl;
// }


// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     int count=1;
//     for(int j=1;j<=n-i;j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=i;j++){
//         cout<<count;
//         count++;
//     }
//     cout<<endl;
// }


// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=i;j++){
//         cout<<j;
//     }
//     cout<<endl;
// }

// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//         cout<<" ";
//     }
//     for(char name='A';name<='A'+i-1;name++){
       
//         cout<<name;
//     }
//     cout<<endl;
// }

// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//         cout<<" ";
//     }
//     int p=i;
//     for(int j=1;j<=i;j++){        
//         cout<<p;
//         p--;
//     }
//     cout<<endl;
// }

// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//         cout<<"  ";
//     }
//     for(int j=1;j<=2*i-1;j++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }


// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//         cout<<"  ";
//     }
//     for(int j=1;j<=i;j++){
//         cout<<j<<" ";
//     }
//     for(int j=i-1;j>=1;j--){
//         cout<<j<<" ";
//     }

//     cout<<endl;
// }

// int n;
// cin>>n;
// for(int i=n;i>=1;i--){
//     for(int j=1;j<=n-i;j++){
//         cout<<"  ";
//     }
//     for(int j=1;j<=2*i-1;j++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }

// int n;
// cin>>n;
// for(int i=1;i<=n/2;i++){
//     for(int j=1;j<=n/2-(i-1);j++){
//         cout<<"* ";
//     }
//     for(int j=1;j<=2*i-2;j++){
//         cout<<"  ";
//     }
//     for(int j=n/2-(i-1);j>=1;j--){
//         cout<<"* ";
//     }
//     cout<<endl;
// }
// for(int i=n/2;i>=1;i--){
//     for(int j=1;j<=n/2-(i-1);j++){
//         cout<<"* ";
//     }
//     for(int j=1;j<=2*i-2;j++){
//         cout<<"  ";
//     }
//     for(int j=n/2-(i-1);j>=1;j--){
//         cout<<"* ";
//     }
//     cout<<endl;
// }

// int n;
// cin>>n;
// for(int i=n/2;i>=1;i--){
//     for(int j=1;j<=n/2-(i-1);j++){
//         cout<<"* ";
//     }
//     for(int j=1;j<=2*i-2;j++){
//         cout<<"  ";
//     }
//     for(int j=n/2-(i-1);j>=1;j--){
//         cout<<"* ";
//     }
//     cout<<endl;
// }
// for(int i=1;i<=n/2-1;i++){
//     for(int j=1;j<=n/2-(i);j++){
//         cout<<"* ";
//     }
//     for(int j=1;j<=2*i;j++){
//         cout<<"  ";
//     }
//     for(int j=n/2-(i);j>=1;j--){
//         cout<<"* ";
//     }
//     cout<<endl;
// }


// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<" *";
//     }
//     cout<<endl;
// }


void printPattern(int n) {
    for (int row = 0; row < n; row++) {
        // Start with 1 if row is even, otherwise start with 0
        int start = (row % 2 == 0) ? 1 : 0;

        for (int col = 0; col <= row; col++) {
            // Alternate between 1 and 0 based on column index
            cout << start << " ";
            start = 1 - start;
        }

        cout << endl;
    }
}

int main() {
    int n = 5; // Example: n = 5
    printPattern(n);
    return 0;
}

