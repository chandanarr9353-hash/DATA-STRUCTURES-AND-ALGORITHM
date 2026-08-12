#include <iostream>
#include <map>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of an array:";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    map<int,int>mpp;
    for(int i=0;i<n;i++){
        cout<<"enter array element";
        mpp[arr[i]]++;       
    }

    int q;
    cout<<"enter no. of trails:";
    cin>>q;
    while(q--){
        int number;
        cout<<"enter number:";
        cin>>number;
        cout<<mpp[number]<<endl;
    }

    return 0;
}