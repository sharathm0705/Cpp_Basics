// Valid Anagram

// You are given two strings consisting of lowercase English letters. Your task is to determine whether the two strings are anagrams of each other.

// Two strings are said to be anagrams if they contain the same characters with the same frequencies, but possibly in a different order.


// ---

// Input:

// Two space-separated strings.


// ---

// Output:

// Print "Yes" if the strings are anagrams of each other, otherwise print "No".


// ---

// Examples:

// Example 1
// Input: listen silent
// Output: Yes

// Example 2
// Input: triangle integral
// Output: Yes

// Example 3
// Input: apple paple
// Output: Yes

//Program :

#include <iostream>
#include <map>
using namespace std;
int main(){
    string s1="listen";
    string s2="silent";
    if(s1.size()!=s2.size()){
        cout<<"No";
        return 0;
    }
    map<char,int>m1;

    for(int i=0;i<s1.size();i++){
        m1[s1[i]]++;
        m1[s2[i]]--;
    }
    for(auto i:m1){
        if(i.second!=0){
        cout<<"No";
        return 0;
        }
    }
    cout<<"Yes";
    return 0;
}