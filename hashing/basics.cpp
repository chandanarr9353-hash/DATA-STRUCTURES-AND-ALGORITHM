#include <iostream>
#include <utility>
#include <vector>
using namespace std;
int main(){
    pair <int,int> p={1,3};
    cout<<p.first<<" "<<p.second;

    pair <int,pair<int,int>> q={1,{3,5}};
    cout<<q.first<<" "<<q.second.second;

    pair<int,int> arr[]={{2,4},{42,4}};



    //arrays size are non modifiable

    vector <int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector <int> j(5,20);
    //[20 20 20 20 20 ]

    vector <int> k(5);
    //forms a vecotr of size 5 filled with zeos or any garbage value

    //to copy a vector
    vector <int> v1(v);

    vector <pair <int,int>> p;
    p.push_back({2,4});
    p.emplace_back(32,4);









//------------mapping----------------   keys are unique in sorted order of keys

map <int,int> mapp;

map <pair<int,int>,int>> mapp;

map[1]=2;
map.emplace({2,3});
map.insert({3,4});
// {
//     (1,2)
//     (2,3)
//     (3,4)

// }

cout<<mapp[1];
//prints 2

auto it=mapp.find(3);
cout<<*(it).second;

map<int,pair<int,int>> map;
map{2,3}=10;

//to display key-values
for (auto it: mapp){
    cout<<it.first << " "<<it.second<<end;
}




    return 0;
}