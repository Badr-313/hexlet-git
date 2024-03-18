#include<stdio.h>

int main(){
    int data[1000];
    int n;
    int size =0;
 
    
    while(scanf("%d", &n)==1 && n!=-1){
        // data[size]=n;
        int c=0;
        
        
        for(int i=0; i<size; i++){
        
            if(data[i]==n){
               c=1;
               break;
            }
            
            
        }
         if(c==0){
                data[size]=n;
                size++;
            }
        
    }
    for(int i=0; i<size; i++){
        printf("%d ", data[i]);
    }

    return 0;
}