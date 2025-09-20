#include<iostream>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int x, sum=0;
        cin >> x;
        
        if(x/1000){
            int m = x%10;
            sum = ((m-1)*10)+10;
        }
        else if(x/100){
            int m = x%10;
            sum = ((m-1)*10)+6;
        }

        else if(x/10){
            int m = x%10;
            sum =((m-1)*10)+3;
        }

        else{
            int m = x%10;
            sum = ((m-1)*10)+1;
        }

        cout << sum<< endl;
    }
}