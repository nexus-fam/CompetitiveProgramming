//https://leetcode.com/problems/palindrome-number/description/?envType=problem-list-v2&envId=math
#include<iostream>
using namespace std;

bool isPalindrome(int x) {
        if(x<0) return false;
        else if(x==0) return true;
        else{
            int rev = 0;
            for(int n=x, rev = 0; n>0; n/=10){
                if(rev > INT_MAX/10) return false;
                rev = (rev*10) + (n%10);
                if(rev==x) return true;
            }
            return false;
        }
        
    }

int main(){
        int x;
        cin >> x;
        cout << (isPalindrome(x)?"true":"false");
        return 0;
    }