#include <stdlib.h>
#include <math.h>
#include <stdio.h>

void swap(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

void sort(float arr[], int len) {
    int i, j;
    for (i=0; i<len-1; i++) {
        for (j=i+1; j<len; j++) {
            if (arr[j] < arr[i]) {
                swap(&arr[j], &arr[i]);
            }
        }
    }
}

float mean(float arr[], int len) {      // Requires an array of numbers and its number of elements
    int i;
    float sum = 0.0;
    for (i=0; i < len; i++) {
        sum += arr[i];
    }
    return sum/len;
}

float median(float arr[], int len) {        // Requires an array of numbers and its number of elements
    sort(arr, len);
    if (len % 2 == 0) {
        return ((arr[len / 2] + arr[len / 2 - 1]) / 2.0);
    }
    else {
        return arr[len / 2];
    }
}