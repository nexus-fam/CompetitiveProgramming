#include<stdio.h>

int main(){
    int n, k, l;
    scanf("%d", &n);
    int ar1[n], ar2[n];
    for(int i=0; i<n; i++){
        scanf("%d", &ar1[i]);
    }

    for(int i=0; i<n; i++){
        scanf("%d", &ar2[i]);
    }
    
    scanf("%d %d", &k, &l);

    for(int i=0; i<n; i++){
        int count=0;
        for(int j=0; j<n && j+1<n; j++){
            if(ar1[j]<ar1[j+1]){
                int temp = ar1[j];
                ar1[j] = ar1[j+1];
                ar1[j+1]= temp;
                int temp2 = ar2[j];
                ar2[j] = ar2[j+1];
                ar2[j+1]= temp2;
            }
            else{
                count++;
            }
            if(count==n)break;
        }
    }

    
int sum1 =0, sum2=0;
    for(int i=0; i<=k; i++){
        if(i<=l){
            
            sum2 += ar2[i];
        }
        
        sum1 += ar1[i];
    }
    printf("%d", sum1 + sum2);
}