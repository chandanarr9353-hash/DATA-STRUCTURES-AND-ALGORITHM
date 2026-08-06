#include <iostream>
using namespace std;

//constant widow of k
int maxarr(int arr[],int k,int n ){
    int sum=0;
    
    for (int i=0;i<k;i++){
        sum+=arr[i];
    }
    int maxsum=sum;
    for (int i=k;i<n;i++){
        sum=sum+arr[i]-arr[i-k];
        maxsum=max(maxsum,sum);

    }
    
}