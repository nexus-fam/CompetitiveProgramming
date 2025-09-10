//https://codeforces.com/problemset/problem/231/A
#include<iostream>

using namespace std;

int main (){
    int n;
    cin >> n;
    int prb [n][3] = {0};


    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
        cin >> prb[i][j];
        }
    }
    int p =0;
    for(int i=0; i<n; i++){
        
      if(prb[i][0]&&prb[i][1]||prb[i][1]&&prb[i][2]||prb[i][0]&&prb[i][2]){
        p++;
      }
    }

    cout << p;

}