#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main(){
    vector<int>v={5,3,2,-1,-6,5,-7,7};
    stack<int>st;
    for(int i=0;i<v.size();i++){
        if(st.empty()){
            st.push(v[i]);
        }else if(v[i]<0&&st.top()<0)
        st.push(v[i]);
        else if(v[i]>0&&st.top()>0)
        st.push(v[i]);
        else
        st.pop();}
    v.clear();
    while(!st.empty()){
        v.insert(v.begin(),st.top());
        st.pop();
    }
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<endl;
    return 0;
}