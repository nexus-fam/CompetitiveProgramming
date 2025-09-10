#include<iostream>
using namespace std;

int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int l=0, r=0;
        for(int i=0; i<3; i++){
            r +=n % 10;
            
            n/=10;
        }
        
        

        for(int i=0; i<3; i++){
            l+=n%10;
            n/=10;
        }
        
        if(l==r)
        cout << "yes"<<endl;
        else cout <<"no"<<endl;
    }
    return 0;
}