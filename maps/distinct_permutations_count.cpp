// Count Arrangements of Characters in a String

// You are given a string consisting of only lowercase English letters. Your task is to find and print the total number of distinct arrangements (permutations) of the characters of the string.

// If the string contains repeated characters, treat identical letters as indistinguishable while counting.


// ---

// Input:

// A single string consisting of lowercase letters only.

// Output:

// Print a single integer – the total number of distinct arrangements of the characters.


// ---

// Examples:

// Example 1
// Input:
// abc
// Output:
// 6
// (3! = 6 unique arrangements)

// Example 2
// Input:
// aab
// Output:
// 3
// (3! / 2! = 6 / 2 = 3 unique arrangements)

// Example 3
// Input:
// aaaa
// Output:
// 1
// (All characters are the same)

// Example 4
// Input:
// onion
// Output:
// 30
// (5! / (2! × 2!) = 120 / 4 = 30)

// Example 5
// Input:
// abbba
// Output:
// 10
// (5! / (2! × 3!) = 120 / 12 = 10)

//Program :

#include <iostream>
#include <map>
using namespace std;
int factorial(int n);
int main(){
    string s="onion";
    map<char,int>m;
    int num=factorial(s.size());
    int dino=1;
    for(int i=0;i<s.size();i++){ 
            m[s[i]]++;
    }for(auto i:m){
        dino = dino * factorial(i.second); 
    }
    int ans=num/dino;
    cout<<ans;
    return 0;
}
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}