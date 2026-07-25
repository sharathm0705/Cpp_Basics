//Lcm of n numbers :

#include <iostream>
#include <map>
#include <string>
using namespace std;
int lcm(int a,int b);
int main(){
    int n;
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int ans=num[0];
    
    for(int i=0;i<n;i++){
        ans=lcm(ans,num[i]);
    }
    cout<<ans;

    return 0;
}
int lcm(int a,int b){
    int lcm;
    if(a>b)
    lcm=a;
    else
    lcm=b;
    int temp=lcm;
    for(int i=0;i<lcm;i++){
    if((lcm%a==0)&&(lcm%b==0)){
        return lcm;
    }
        lcm+=temp;
}return lcm;

}