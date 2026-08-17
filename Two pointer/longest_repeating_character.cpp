//longest repeating character by interchanging atmost 2 values
#include <iostream>
#include  <map>
#include <algorithm>
using namespace std;

int brute_force(string s,int k,int n){
    int maxlen=0;
    for(int i =0;i<n;i++){
        int hash[26]={0};
        int maxf=0;
        for(int j=i;j<n;j++){
            hash[s[j]]++;
        maxf=max(maxf,hash[s[j]]);
        int changes=(j-i+1)-maxf;
        if(changes<=k){
            maxlen=max(maxlen,j-i+1);
        }else{
            break;
        }
        
        }
    }
}


int optimal_approach(string s,int n,int k){
    int maxlen=0,l=0,r=0;
    int hash[26]={0};
    int maxf=0;
    if(r<n){
        hash[s[r]-'A']++;
        maxf=max(maxf,hash[s[r]-'A']);
        int changes=(r-l+1)-maxf;
        if(changes<=k){
            maxlen=max(maxlen,r-l+1);
        }else{
            while(changes>k){
                hash[s[l]]--;
                l++;
            }

        }
        r++;




    }
    
}
