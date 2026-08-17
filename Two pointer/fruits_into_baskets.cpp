#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std; 
//max length subarray with atmost 2 types of numbers
int brute_force(int arr[],int n){
    int maxlen=0;
    for(int i=0;i<n;i++){
        set <int> s;
        for(int j=i;j<n;j++){
            s.insert(arr[i]);
            if(s.size()<=2){
                maxlen=max(maxlen,j-i+1);
            
            }else{
                break;
            }
        }
    }
}     



    //optimal approach

    int optimal_apporach(int arr[],int k,int n){
        int l=0,r=0,maxlen=0;
        map<int,int>mpp;
        while(r<n){
            mpp[arr[r]]++;

            if(mpp.size()<=k){
                maxlen=max(maxlen,r-l+1);
                 
            }else{
                while(mpp.size()>k){
                    mpp[arr[l]]--;
                    if(mpp[arr[l]]==0){
                        mpp.erase(arr[l]);
                         
                    }
                    
                    l++;
                }
            }
            r++;
        }

    }
     
