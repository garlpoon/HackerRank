#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int *a;
    int n = 0, k = 0; 

    scanf("%d %d",&n,&k);
    a = malloc(sizeof(int) * n); 

    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    
    for(int i = 0; i < n; i++) {
        if(i+k < n)
            printf("%d ", a[i+k]);
        else
            printf("%d ", a[i+k-n]);  
    }
    
    return 0;
}