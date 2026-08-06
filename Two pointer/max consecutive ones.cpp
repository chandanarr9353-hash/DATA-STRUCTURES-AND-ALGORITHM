#include <iostream>
using namespace std;


//brute force
int longest_subarray(int arr[],int n,int k){
    int maxlen=0;
    for (int i=0;i<n;i++){
        int zeros=0;
        for (int j=i;j<n;j++){
            if(arr[j==0]){
                zeros++;               
            }
            if(zeros>k){
                break;
            }
            if(zeros<=k){
                maxlen=max(maxlen,j-i+1);
            }
            

        }
    }
}