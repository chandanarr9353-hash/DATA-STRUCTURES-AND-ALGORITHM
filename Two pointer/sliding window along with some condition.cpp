#include <iostream>
using namespace std;


//brute force appoarch
int longestsubarray(int arr[],int n,int k){
    for (int i=0;i<n;i++){
        int sum=0,count=0,maxlen=0;
        for(int j=0;j<n;j++){
            sum+=arr[j];
            count++;

        }
        if (sum<=k){
            maxlen=max(maxlen,count);
            return maxlen;
        }
    }

}



//optimize approach
int longestsubarray(int arr[],int n,int k){
    int l=0,r=0,sum=0,maxlen=0;
    while(r<n){
        sum+=arr[r];
        r++;
        

        while(sum>k){
            sum=sum-arr[l];
            l++;
        }
        if(sum<=k){
            maxlen=max(maxlen,r-l);
        }
    }
}