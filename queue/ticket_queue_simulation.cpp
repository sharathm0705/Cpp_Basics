//A person has to buy a ticket in a queue but he gets only one ticket at a time.what is the ticket number of kth person's last ticket :

#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main(){
    vector<int>v={2,1,2,3,4};
    int k;
    cin>>k;
    queue<int>q;
    for(int i=0;i<v.size();i++){
        q.push(i);
    }int count=0;
    while(v[k]!=0){
        v[q.front()]--;
        count++;
        if(v[q.front()]>0){
            q.push(q.front());
            q.pop();
        }
        else
        q.pop();
    }
    cout<<count<<endl;

    return 0;
}