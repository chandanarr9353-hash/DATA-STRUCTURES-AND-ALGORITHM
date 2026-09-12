//an array is given where u need to find the number od subarrays in which the sum of odd elements in the array must be equal to goal
//the logic is-consider odd elements as 1 and even elements aas 0
#include <iostream>
#include <algorithm>
using namespace std;
int optimal_approach(int arr[],int goal,int n){
    int l=0,r=0,sum=0,count=0;
    while(r<n){
        if(goal<0){
            return 0;
        }
        sum+=(arr[r]%2);
        while(sum>goal){
            sum=(sum-arr[l]%2);
            l++;
        }
        count+=r-l+1;
        r++;
    }
}

