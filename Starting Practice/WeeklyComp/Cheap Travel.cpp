#include<iostream>
using namespace std;

int main(){

    int n, m, a, b, rem;
    cin >> n >> m >> a >> b;
    

    if(m>n){
    if(b<(a*n)){
        cout << b << endl;
            return 0;
        }
        else{
            cout << a*n << endl;
        }
    }
    else if( m==n){
        if(b>(a*n)){
            cout << a*n<< endl;
        }
        else{
            cout << b<< endl;
        }
    }
    
    else if(m<n){
        
        rem =n- ((n/m)*m);
        if(a*m>b){
            cout << (b*(n/m)+(rem==0?0:(a*rem>b)?b:(a*rem)));
        }
        else{
            cout << a*n<<endl;
        }
        // cout<<"n/m="<<n/m<<"rem="<<rem<<"a="<<a;
    }
}