#include <iostream>
#include <map>
#include <algorithm> 
using namespace std;

//an array is given where u need to find the sum of number of subarrays whose sum is equal to goal
//hence the logic is 1st u need to find the nnumber of subarrays whose sum is equal to or
//lesser than goal and then subtract it from the number of subarrays whose sum is ewual to or lesser than goal-1
int optimal_approach(int arr[],int goal,int n){
    int l=0,r=0,sum=0,count=0;
    while(r<n){
        if(goal<0){
            return 0;
        }
        sum+=arr[r];
        while(sum>goal){
            sum=sum-arr[l];
            l++;
        }
        count+=r-l+1;
        r++;
    }
}
