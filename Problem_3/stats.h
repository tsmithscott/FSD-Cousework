#include <math.h>


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
    float sum = 0.0;
    for (i = 0; i < len; i++) {
        sum += arr[i];
    }
    return sum;
}


float mean(float arr[], int len) {
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
    int i;
    float new_arr[len];
    float avg = mean(arr, len);
    for (i = 0; i < len; i++) {
        new_arr[i] = pow(arr[i] - avg, 2);
    }
    return sqrt(mean(new_arr, len));
}


float kurtosis(float arr[], int len) {
    int i;
    float avg = mean(arr, len);
    float a = 0.0;
    for (i = 0; i < len; i++) {
        a += pow((arr[i] - avg), 4);
    }
    return a / (len*pow(stdDeviation(arr, len), 4));
}