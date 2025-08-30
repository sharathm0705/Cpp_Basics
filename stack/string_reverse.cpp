//Reverse the string using stack :
#include <iostream>
#include <stack>
using namespace std;
int main(){
    string s=" A B C D E ";
    stack<char>st;
    for(int i=0;i<s.size();i++){
        st.push(s[i]);
    }
    s="";
    while(!st.empty()){
        s+=st.top();
        st.pop();
    }
    cout<<s;
    return 0;
}