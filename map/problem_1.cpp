// Question: Unique Characters in a String
// You are given a string consisting of lowercase English letters. Your task is to form a new string that contains only the first occurrence of each character, while preserving their order from the original string.
// ---
// Input:
// A single string made up of lowercase English letters.
// Output:
// A string with unique characters in the order they first appeared.

// ---

// Example 1
// Input: badbaccda
// Output: badc

// Example 2
// Input: mmnoppqmmn
// Output: mnopq

// Example 3
// Input: cabcabc
// Output: cab

// Example 4
// Input: zyxzxy
// Output: zyx

//Program :

#include <iostream>
#include <map>
using namespace std;
int main(){
    string s;
    cin>>s;
    map<char,int>m;
    string ans;
    for(int i=0;i<s.size();i++){
        if(m.count(s[i])==0){
            ans+=s[i];
            m[s[i]]=1;
        }
    }
    cout<<ans<<endl;
    return 0;
}


