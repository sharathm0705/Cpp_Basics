#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
    vector<int>v={2,3,1,1,2,3,4,4,5,3,2,1};
    map<int,int>m;
    for(int i=0;i<v.size();i++){
        m[v[i]]++;
    }for(auto i:m){
        cout<<i.first<<":"<<i.second<<endl;
    }
    return 0;
}
