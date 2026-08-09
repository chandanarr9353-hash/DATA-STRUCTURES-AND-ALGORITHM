#include <iostream>
#include <set>
using namespace std;

int fruitbasket(int arr[],int n,int k){
    int l=0,r=0,maxlen=0;
    set <int> s;
    while (r<n){     
        s.insert(arr[r]);

        while(s.size()>k){
            s.erase(arr[l]);
            l++;
        }

        if (s.size()<=k){
            maxlen=max(maxlen,r-l+1);
            r++;
        }
    }
    
}