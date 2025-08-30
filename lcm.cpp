
//Create a function which returns lcm of 2 numbers :

#include <iostream>
#include <map>
#include <string>
using namespace std;
int lcm(int a,int b);
int main(){
    int flcm=lcm(13,11);
    cout<<flcm;

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