// At a national tech event, every participant receives a custom name badge. The event organizers want the names on the badge to look visually appealing by arranging the letters to form a palindrome.

// They can rearrange the letters from the participant’s name (all in lowercase), and their goal is to form the longest possible palindrome using some or all of the letters.

// You are given a string s representing the characters in the participant’s name. Your task is to return the length of the longest palindrome that can be built using those letters.


// ---

// Example 1:

// Input:
// s = "abccccdd"

// Output:
// 7

// Explanation:
// One of the longest palindromes that can be formed is "dccaccd". You can use two 'c's and two 'd's on either side, and one odd letter (like 'a' or 'b') in the middle.


// ---

// Example 2:

// Input:
// s = "a"

// Output:
// 1

// Explanation:
// Only one character is available, so the palindrome is "a" itself.

//Program :

#include <iostream>
#include <map>
using namespace std;
int main(){
    string s="abccccdd";
    int ans=0,flag=0;
    map<char,int>m;
    for(int i=0;i<s.size();i++){
        m[s[i]]++;
    }for(auto i:m){
        if(i.second%2==0){
        ans+=i.second;
        
    }
        else if(i.second%2==1){
            i.second=i.second-1;
            ans+=i.second;
            flag=1;
        }
    }
    if(flag==1){
        cout<<ans+1;
    }else
    cout<<ans;

    return 0;
}




