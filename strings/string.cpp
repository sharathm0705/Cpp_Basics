#include <iostream>
#include <string>
using namespace std;

int main(){
    string s="abc";
    s+='d';
    cout<<s<<endl;
    s='e'+s;
    cout<<s;
    s="";
    string s1=s;
    cout<<s1<<endl;
}