// In the kingdom of Numaria, the ancient Mirror Oracle holds a secret: every number hides a palindrome deep within itself.

// Legend says that a number, when shown its mirror image (its digits reversed), begins a journey. Each time, it adds its reflection to itself, transforming and evolving. This process continues until the number reaches a perfect symmetry—a palindrome, where the number reads the same forward and backward.

// The wise wizard of Numaria, Algebrion, has tasked you with uncovering the mirror journey of a given number.

//  Your Task:
// Given a number n, simulate its Mirror Transformation Journey by repeatedly:

// Reversing its digits to obtain a reflected number r.

// Adding r to n.

// Repeating this process with the new sum until a palindrome is found.

// Return the final palindrome number discovered.

//  Input:
// An integer n (where 1 ≤ n ≤ 10⁶)

//  Output:
// The palindrome number reached after one or more mirror transformations.

// Example:
// Input:
// 78
// Explanation:

// 78 + 87 = 165

// 165 + 561 = 726

// 726 + 627 = 1353

// 1353 + 3531 = 4884  Palindrome

// Output:
// 4884


#include <iostream>
#include <map>
#include <string>
using namespace std;
int palindrome(int n);
int main(){
    int n;
    cin>>n;
    while(1){
        int r=0,temp=n;
        while(temp>0){
            r=r*10+temp%10;
            temp=temp/10;
        }if(n==r){
            cout<<r;
            break;
        }else
        n=n+r;
    }
    return 0;
}
