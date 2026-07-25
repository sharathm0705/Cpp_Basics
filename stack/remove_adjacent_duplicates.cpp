//Similar strings should not be together :
#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main(){
    vector<string>v={"ab","ac","ac","ab","ad","ab"};
    stack<string>st;
    for(int i=0;i<v.size();i++){
        if(st.empty()){
            st.push(v[i]);
        }else if(v[i]==st.top())
        st.pop();
        else
        st.push(v[i]);}
    v.clear();
    while(!st.empty()){
        v.insert(v.begin(),st.top());
        st.pop();
    }
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<endl;
    return 0;
}