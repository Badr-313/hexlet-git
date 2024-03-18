#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, m;
    
    scanf("%d%d", &n, &m);
    //int data[n][m];
    int **data=malloc(n*sizeof(int*));
    
    for(int i=0; i<n; i++){
    data[i] = malloc(m * sizeof(int));
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &data[i][j]);
        }
    }
    
    for(int i=n-1; i>-1; i--){
        for(int j=m-1; j>-1; j--){
            if(j==0) printf("%d", data[i][j]);
            else if(j!=0)
            printf("%d ", data[i][j]);
        }
        if(i!=0) printf("\n");
    }

    for(int i=0; i<n; i++){
    free(data[i]);
    }

    free(data);
return 0;
            
}