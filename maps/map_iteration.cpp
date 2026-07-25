#include <iostream>
#include <map>
using namespace std;
int main(){
    map<int,int>m;
    m[1]=3;
    m[1]++;
    m[2]++;
    m[3]++;
    m[4]--;
    cout<<m.size()<<endl;
    for(auto i:m){
        cout<<i.first<<":"<<i.second<<endl;
    }
    return 0;
}