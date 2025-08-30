#include <iostream>
#include <vector>
#include <map>
using namespace std;


int main(){
    vector<int>v={2,3,1,1,2,3,4,4,5,3,2,1};
    map<int,int>m;
    for(int i=0;i<v.size();i++){
        m[v[i]]++;
    }for(int i=0;i<v.size();i++){
        if(m[v[i]]>0){
        cout<<v[i]<<":"<<m[v[i]]<<endl;
        m[v[i]]=0;
    }
}
    return 0;
}