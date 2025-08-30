#include <iostream>
#include <map>
#include <vector>
#include <unordered_map>
#include <stack>
using namespace std;
// int main(){
//     cout <<"Hello World"<<endl;
//     cout << 123;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cin >> a >> b;
//     cout<<a+b;
//     return 0;
// }

//Reverse Function :
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main(){
//     vector<int>v={1,2,3,4,5,6};
//     reverse(v.begin(),v.end());
//     for(int i=0;i<v.size();i++)
//     cout<<v[i]<<"\t";

//     return 0;
// }


//Sort Function :
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main(){
//     vector<int>v={2,5,1,3,7,6,4};
//     sort(v.begin(),v.end());
//     for(int i=0;i<v.size();i++)
//     cout<<v[i]<<"\t";

//     return 0;
// }



// int main(){
//     string s="abc";
//     s+='d';
//     cout<<s<<endl;
//     s='e'+s;
//     cout<<s;
//     s="";
//     string s1=s;
//     cout<<s1<<endl;
// }


//Map :

// int main(){
//     map<char,int>m;
//     m['b']=2;
//     m['a']=4;
//     m['c']=3;
//     if(m.count('a')==1){
//         cout<<"Yes"<<endl;
//     }else{
//         cout<<"No"<<endl;
//     }
//     return 0;
// }


// int main(){
//     map<int,int>m;
//     m[1]=3;
//     m[1]++;
//     m[2]++;
//     m[3]++;
//     m[4]--;
//     cout<<m.size()<<endl;
//     for(auto i:m){
//         cout<<i.first<<":"<<i.second<<endl;
//     }
//     return 0;
// }


// int main(){
//     vector<int>v={2,3,1,1,2,3,4,4,5,3,2,1};
//     map<int,int>m;
//     for(int i=0;i<v.size();i++){
//         m[v[i]]++;
//     }for(auto i:m){
//         cout<<i.first<<":"<<i.second<<endl;
//     }
//     return 0;
// }


// int main(){
//     vector<int>v={2,3,1,1,2,3,4,4,5,3,2,1};
//     unordered_map<int,int>m;
//     for(int i=0;i<v.size();i++){
//         m[v[i]]++;
//     }for(auto i:m){
//         cout<<i.first<<":"<<i.second<<endl;
//     }
//     return 0;
// }


// int main(){
//     vector<int>v={2,3,1,1,2,3,4,4,5,3,2,1};
//     map<int,int>m;
//     for(int i=0;i<v.size();i++){
//         m[v[i]]++;
//     }for(int i=0;i<v.size();i++){
//         if(m[v[i]]>0){
//         cout<<v[i]<<":"<<m[v[i]]<<endl;
//         m[v[i]]=0;
//     }
// }
//     return 0;
// }



//Stack
// int main(){
//     stack<int>st;
//     st.push(5);
//     st.push(6);
//     st.push(7);
//     st.push(8);
//     st.push(9);
//     cout<<st.size()<<endl;
//     cout<<st.top()<<endl;
//     cout<<st.empty()<<endl;
//     st.pop();
//     while(!st.empty()){
//         cout<<st.top()<<endl;
//         st.pop();
//     }
//     return 0;
// }



//Reverse the string using stack :
// int main(){
//     string s=" A B C D E ";
//     stack<char>st;
//     for(int i=0;i<s.size();i++){
//         st.push(s[i]);
//     }
//     s="";
//     while(!st.empty()){
//         s+=st.top();
//         st.pop();
//     }
//     cout<<s;
//     return 0;
//}


//Adding element at end of the stack :
// int main(){
//     stack<int>st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     int k;
//     cin>>k;
//     stack<int>temp;
//     while(!st.empty()){
//         temp.push(st.top());
//         st.pop();
//     }
//     st.push(k);
//     while(!temp.empty()){
//         st.push(temp.top());
//         temp.pop();
//     }
//     while(!st.empty()){
//          cout<<st.top()<<endl;
//          st.pop();
//     }
//     return 0;
// }


//Similar strings should not be together :
// int main(){
//     vector<string>v={"ab","ac","ac","ab","ad","ab"};
//     stack<string>st;
//     for(int i=0;i<v.size();i++){
//         if(st.empty()){
//             st.push(v[i]);
//         }else if(v[i]==st.top())
//         st.pop();
//         else
//         st.push(v[i]);}
//     v.clear();
//     while(!st.empty()){
//         v.insert(v.begin(),st.top());
//         st.pop();
//     }
//     for(int i=0;i<v.size();i++)
//     cout<<v[i]<<endl;
//     return 0;
// }


int main(){
    vector<int>v={5,3,2,-1,-6,5,-7,8};
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




