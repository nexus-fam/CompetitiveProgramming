#include<iostream>
using namespace std;

long long f( int f){
    long long fact =1;
    for(int i= 1; i<=f; i++){
        fact *=i;
    }
    return fact;
}

long long bino(int n, int m){
    long int bi = (f(n)/(f(m)*f(m)));
    return bi;
}

int main(){
    int n;
    cin >> n;
    long long sol = bino(n, n/2)*f((n/2)-1)*f((n/2)-1)/2;
    cout << sol;
}
/*

    n!           ((n/2-1)!)^2
=  -------------*----------------
   ((n/2)!)^2          2


   n (n-1)!                ((n/2-1)!)^2
=  ------------------  * --------------
  (n/2)^2 ((n/2-1)!)^2          2


  2 (n-1)!
= ---------
    n       */