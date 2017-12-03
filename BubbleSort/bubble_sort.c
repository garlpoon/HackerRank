#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void swap(int arr[], int x, int y) {
    int tmp = arr[x];
    arr[x] = arr[y];
    arr[y] = tmp;
}

int main() {
    int n = 0, m = 0, swapNum = 0, totalSwap = 0; 
    bool orderedFlag = false; 
    int *a;
    
    scanf("%d",&n);
    a = malloc(sizeof(int) * n);
    m = n - 1; // m is used to lower the amount of checks after each pass
    
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    
    for (int i = 0; i < n && !orderedFlag; i++) {
        for (int j = 0; j < m; j++) {
            if (a[j] > a[j + 1]) {
                swap(a, j, j + 1);
                swapNum++;
            }
        }
        if (swapNum == 0) {
            orderedFlag = true; // end if ordered
        }
        totalSwap += swapNum;
        swapNum = 0;
        m--;
    }
    
    printf("Array is sorted in %i swaps.\n", totalSwap);
    printf("First Element: %i\n", a[0]);
    printf("Last Element: %i", a[n-1]);
    
    return 0;
}
