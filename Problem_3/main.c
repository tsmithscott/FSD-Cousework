#include <stdio.h>
#include "stats.h"

double test_array[6] =  {1, 2, 5, 10, 20, 50};
void printArray(float arr[], int len) {
    int i;
    for (i = 0; i < len; i++){
        printf("%f ", arr[i]);
    }
}

int main() {
    int i, len;
    printf("Enter the number of elements required:\n");
    scanf("%d", &len);
    float array[len];

    printf("\nEnter the numbers:\n");
    for (i=0; i<len; i++) {
        scanf("%f", &array[i]);
    }

    //sort(array, len);
    printf("\n");
    
    printf("\nMean: %.2f    Median: %.2f", mean(array, len), median(array, len));
    return 0;
}