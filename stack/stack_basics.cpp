//Stack :
#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int>st;
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(9);
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    cout<<st.empty()<<endl;
    st.pop();
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}