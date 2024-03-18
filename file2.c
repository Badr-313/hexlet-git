#include <stdio.h>
#include <math.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    //int data=malloc(n*sizeof(int));
    int data[n];
    
    for(int i=0; i<n; i++){
        scanf("%d", &data[i]);
    }
    
    for(i=0, j=n-1; i<n && j>-1; i++, j--){
            if(i!=j){
                printf("%d ", data[i]);
            printf("%d ", data[j]); }
        else if(i==j){
        printf("%d", data[i]);
        break;
        }
    }
    
    
    return 0;
}