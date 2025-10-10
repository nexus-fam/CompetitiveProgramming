#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin  >> n;
        int ar[n], zero=0, neg=0;
        for(int i=0; i<n; i++){
            cin >> ar[i];
            if(ar[i]<0) neg++;
            else if(ar[i]==0) zero++;
        }
         cout << (zero + ((neg%2)*2))<<endl;
    }
    return 0;
}