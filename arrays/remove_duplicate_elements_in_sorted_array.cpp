#include <iostream>
using namespace std;

int optimal_apporach(int arr[],int n){
    int i=0,j=1;
    while(j<n){
        if(arr[1]!=arr[j]){
            i++;
        }
        arr[i]=arr[j];
        j++;
    }
}