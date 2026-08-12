#include <iostream>
#include <map>
using namespace std;

int longest_substring(string s,int k,int n){
    int r=0,l=0,maxlen=0;  
    map<char,int> mpp;

    while(r<n){
        mpp[s[r]]++;
        if(mpp.size()<=k){
            maxlen=max(maxlen,r-l+1);
            
        }
        else{
            mpp[s[l]]--;
                if(mpp[s[l]]==0){
                    mpp.erase(s[l]);
                    l++;            
        }
        r++;

    }
}