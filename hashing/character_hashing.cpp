#include <iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter the string:";   
    cin>>s;
    int n=s.length();


    int hash[1000]={0};
    for(int i=0;i<n;i++){
        hash[s[i]]++;
    }

    int q;
    cout<<"enter no.of trials:";
    cin>>q;

    while(q--){
        char r;
        cout<<"enter character:";
        cin>>r;
        cout<<hash[r]<<endl;

    }



    return 0;
}