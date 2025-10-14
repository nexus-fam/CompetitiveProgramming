#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin >> ar[i];
        int sqr = ceil(sqrt(ar[i])), k=0;
        for(int j=2; j<=sqr; j++){
            if(ar[i]%j==0){
                if(ar[i]/j==j){
                    k++;
                }
                else if(ar[i]/j>j){
                    k+=2;
                    break;
                }
                else break;
                
            }
        }
        if(k==1){
            cout << "YES"<<endl;
        }
        else cout << "NO"<<endl;
    }
    return 0;
}
