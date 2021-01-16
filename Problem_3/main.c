#include <stdio.h>
#include "stats.h"

int main() {
    int i, len;

    printf("Enter the number of elements required:\n");
    scanf("%d", &len);
    float array[len];

    printf("\nEnter the numbers:\n");
    for (i=0; i<len; i++) {
        scanf("%f", &array[i]);
    }

    printf("\n(Everything is to 2dp)\n"
           "\nMean: %.2f\nMedian: %.2f"
           "\nStandard Deviation: %.2f\nKurtosis: %.2f",
           mean(array, len), median(array, len),
           stdDeviation(array, len), kurtosis(array, len));
    return 0;
}
