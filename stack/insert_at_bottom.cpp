//Adding element at end of the stack :
#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    int k;
    cin>>k;
    stack<int>temp;
    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }
    st.push(k);
    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }
    while(!st.empty()){
         cout<<st.top()<<endl;
         st.pop();
    }
    return 0;
}
