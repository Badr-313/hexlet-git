#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n=1, i, j, k=1, size=0, z;
    int *data=malloc(n * sizeof(int));
    while (scanf("%d", &z)==1 && z != -1)
    {
    data[size]=z;
    data =  realloc(data, (k*2) * sizeof(int));
    size++;
    k++;
    }

    for(i=0, j=size-1; i<size && j>-1; i++, j--){
            if(i!=j && i<j){
                printf("%d ", data[i]);
            printf("%d ", data[j]); }
        else if(i==j){
        printf("%d", data[i]);
        i=size;
        }
        else if(i>j){
        break;
        }

    }
     
    free(data);


    return 0;
}
