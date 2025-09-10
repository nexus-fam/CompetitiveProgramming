#include<iostream>
using namespace std;
int main(){
    int n, x = 0;
    string s;
    
    cin >> n;
    while(n--){
        bool ispos = false;
        cin >> s;
        for(int i = 0; i<3; i++){
        if(s[i]=='+'){
            ispos = true;
            break;
        }
    }
    if(ispos)x++;
    else x--;
    
    }
    cout << x;
    return 0;
}