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


float sum(float arr[], int len) {
    int i;
    float sum;
    for (i = 0; i < len; i++) {
        sum += arr[i];
    }
    return sum;
}


float mean(float arr[], int len) {
    int i;
    return sum(arr, len)/len;
}


float median(float arr[], int len) {
    sort(arr, len);
    if (len % 2 == 0) {
        return ((arr[len / 2] + arr[len / 2 - 1]) / 2.0);
    }
    else {
        return arr[len / 2];
    }
}


float stdDeviation(float arr[], int len) {
    int i, j, k;
    float new_arr[len];
    float avg = mean(arr, len);
    for (i = 0; i < len; i++) {
        new_arr[i] = pow(arr[i] - avg, 2);
    }
    return sqrt(mean(new_arr, len));
}


float kurtosis(float arr[], int len) {      //TODO: Get this working
    int i, j;
    float avg = mean(arr, len);
    float a = 0.0, b = 0.0, c, d;
    for (i = 0; i < len; i++) {
        a += pow((arr[i] - avg), 4);
    }
    for (i = 0; i < len; i++) {
        b += pow((arr[i] - avg), 2);
    }
    c = a / pow(b, 2);
    d = len * c;
    return d;
}