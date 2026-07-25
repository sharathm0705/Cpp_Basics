//Map :
#include <iostream>
#include <map>
using namespace std;
int main(){
    map<char,int>m;
    m['b']=2;
    m['a']=4;
    m['c']=3;
    if(m.count('a')==1){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}