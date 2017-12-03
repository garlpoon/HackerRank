#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* s = (char *)malloc(10240 * sizeof(char));
    int len = 0, row = 0, col = 0;
    
    scanf("%s",s);
    len = strlen(s);
    col = ceil(sqrt(len));
    row = floor(sqrt(len));
    
    for(int i = 0; i < col; i++){
        for(int j = 0; j <= row; j++){
            if(s[i+(j*col)] != '\0') printf("%c", s[i+(j*col)]);
        }
        printf(" ");
    }
    return 0;
}