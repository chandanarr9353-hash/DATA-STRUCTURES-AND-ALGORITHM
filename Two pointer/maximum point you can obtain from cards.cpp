#include <iostream>
using namespace std;
int maxpoints(int arr[],int n,int k){
    int sum=0;
    for(int i=0;i<k;i+++){
        sum+=arr[i];
    }
    int maxsum=sum;
    for(int i=k-1;i>=0;i--){
        sum=sum-arr[k-i-1]+arr
    }
}