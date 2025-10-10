//https://leetcode.com/problems/add-two-numbers/description/?envType=problem-list-v2&envId=math
#include<iostream>
using namespace std;

bool isPalindrome(int x) {
        int n =x;
        if(x<0) return false;
        else if(x==0) return true;
        else{
            int rev = 0;
            while(n>0){
                if(rev > INT_MAX/10) return false;
                rev *=10;
                rev +=n%10;
                n/=10;
            }
            if(rev==x) return true;
            else return false;
        }
        
    }

int main(){
        int x;
        cin >> x;
        cout << (isPalindrome(x)?"true":"false");
        return 0;
    }