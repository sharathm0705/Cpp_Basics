//Sort Function :

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>v={2,5,1,3,7,6,4};
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<"\t";

    return 0;
}