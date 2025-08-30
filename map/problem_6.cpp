// A sentence is a list of words that are separated by a single space with no leading or trailing spaces. Each word consists of lowercase and uppercase English letters.

// A sentence can be shuffled by appending the 1-indexed word position to each word then rearranging the words in the sentence.

// For example, the sentence "This is a sentence" can be shuffled as "sentence4 a3 is2 This1" or "is2 sentence4 This1 a3".
// Given a shuffled sentence s containing no more than 9 words, reconstruct and return the original sentence.

// Example 1:

// Input: s = "is2 sentence4 This1 a3"
// Output: "This is a sentence"
// Explanation: Sort the words in s to their original positions "This1 is2 a3 sentence4", then remove the numbers.
// Example 2:

// Input: s = "Myself2 Me1 I4 and3"
// Output: "Me Myself and I"
// Explanation: Sort the words in s to their original positions "Me1 Myself2 and3 I4", then remove the numbers.
 
//Program :

#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){
    string s="is2 sentence4 This1 a3";
    map<int,string>m;
    string temp = "";
    for(int i=0;i<s.size();i++){
        if(s[i]==' ')
        continue;
        if(s[i]>='0'&&s[i]<='9'){
            m[s[i]-'0']=temp;
            temp="";
        }else
            temp+=s[i];
            
    }string ans;
    for(auto i:m){
        ans+=i.second+" ";
    }
    ans.pop_back();
    cout<<ans<<endl;
    return 0;
}















