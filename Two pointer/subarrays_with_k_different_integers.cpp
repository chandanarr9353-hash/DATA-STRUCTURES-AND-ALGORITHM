#include <iostream>
#include <map>
using namespace std;
int optimize_appraoach(int arr[],int k,int n){
    int r=0,l=0,count=0;
    map<int,int>mpp;
    if(k<0){
        return 0;
    }
    while(r<n){
        mpp[arr[r]]++;
        if(mpp.size()<=k){
            count+=r-l+1;
        }else{
            mpp[arr[l]]--;
            if(mpp[arr[l]==0]){
                mpp.erase(arr[l]);
            }
            l++;
        }
        r++;
    }
}
