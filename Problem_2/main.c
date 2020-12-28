#include <stdio.h>
#include <string.h>
#define MAX_STRINGS 10
#define MAX_LENGTH 30

void find_lens(char s[MAX_STRINGS][MAX_LENGTH], int l[MAX_STRINGS]);
int vowels(char s[MAX_STRINGS][MAX_LENGTH], int index);
int largest(int l[MAX_STRINGS]);
int smallest(int l[MAX_STRINGS]);


int main() {
    int i, len[MAX_LENGTH], no_min = 0, no_max = 0;
    char sports[MAX_STRINGS][MAX_LENGTH];
    int lengths[MAX_STRINGS];

    printf("Enter the name of 10 sports: \n");
    for (i = 0; i < 10; i++) {
        scanf("%[^\n]%*c", sports[i]);
    }

    for (i = 0; i < 10; i++) {
        printf("\nName: %s        Vowels: %d", sports[i], vowels(sports, i));
    }

    find_lens(sports, lengths);
    int largest_val = largest(lengths);
    int smallest_val = smallest(lengths);
    printf("\n\nLargest: ");
    for (i = 0; i < MAX_STRINGS; i++) {
        if (lengths[i] == largest_val) {
            printf("%s\n         ", sports[i]);
        }
    }
    printf("\nSmallest: ");
    for (i = 0; i < MAX_STRINGS; i++) {
        if (lengths[i] == smallest_val) {
            printf("%s\n          ", sports[i]);
        }
    }
}


void find_lens(char s[MAX_STRINGS][MAX_LENGTH], int l[MAX_STRINGS]) {
    int i = 0;
    for (i = 0; i < MAX_STRINGS; i++) {
        l[i] = strlen(s[i]);
    }
}


int vowels(char s[MAX_STRINGS][MAX_LENGTH], int index) {
    int vowel_count=0, i;
    for (i = 0; i < MAX_LENGTH; i++) {
        if (s[index][i] == 'A' || s[index][i] == 'E' || s[index][i] == 'I' || s[index][i] == 'O' || s[index][i] == 'U' ||
            s[index][i] == 'a' || s[index][i] == 'e' || s[index][i] == 'i' || s[index][i] == 'o' || s[index][i] == 'u') {
            vowel_count++;
        }
    }
    return vowel_count;
}


int largest(int l[MAX_STRINGS]) {
    int i, len_largest=0;
    for (i = 0; i < 10; i++) {
        if (l[i] > len_largest) {
            len_largest = l[i];
        }
    }
    return len_largest;
}


int smallest(int l[MAX_STRINGS]) {
    int i, len_smallest = 30;
    for (i = 0; i < 10; i++) {
        if (l[i] < len_smallest) {
            len_smallest = l[i];
        }
    }
    return len_smallest;
}