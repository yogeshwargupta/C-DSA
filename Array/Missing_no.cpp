#include<iostream>
using namespace std;
int main(){
    int sum=0,arr[5000],n;
    cin>>n;
     for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        sum=sum+arr[i];
    }
    int num_sum = (n*(n+1))/2;
    cout<<num_sum - sum<<endl;
    return 0;
}

