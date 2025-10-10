#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
        for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int ar[n];
        for(int i=0;i<n; i++){
            cin >> ar[i];
        }
        sort(ar, n);
        int maxDif=INT_MIN;
        for(int i=0; i<n; i+=2){
            int dif = abs(ar[i+1] - ar[i]);
            if(dif>maxDif) maxDif = dif;
        }
        cout << maxDif << endl;
    }
    return 0;
}