#include <iostream>
using namespace std;

//the maximum size hash array can be 10^6 inside main,but globally it can be declared upto 10^7 of int datatype
int main (){
    int n;
    cout<<"enter the size of the array:";
    cin >>n;
    int arr[n];
    
    for (int i=0;i<n;i++){
        cout<<"enter the element:";
        cin>>arr[i];
    }

    int hash[256]={0};
    for (int i=0;i<n;i++){
        hash[arr[i]]+=1;

    }

    int q;
    cout<<"enter number of trials";
    cin>>q;
    while(q--){
        int number;
        cout<<"enter the array element:";
        cout<<endl;
        cin>>number;
        cout<<"the frequency of "<<number<<"is "<<hash[number];
    }

    return 0;
}