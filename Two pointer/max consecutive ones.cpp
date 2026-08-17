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

//optimal approach
int subarray(int arr[],int k,int n){
    int l=0,r=0,maxlen=0,zeros=0;
    while(r<n){
        if (arr[r]==0){
            zeros++;
        }
    
        while (zeros>k){
            if (arr[l]==0){
                zeros--;
            }
            l++;          
        }
    
        if (zeros<=k){
            maxlen=max(maxlen,r-l+1);
        }
        r++;
    }
}