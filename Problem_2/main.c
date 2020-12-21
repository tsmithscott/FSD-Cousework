#include <stdio.h>
#include <string.h>
#define MAX_STRINGS 10
#define MAX_LENGTH 30

int vowels(char s[MAX_STRINGS][MAX_LENGTH], int index);

int main() {
    int i;
    char sports[MAX_STRINGS][MAX_LENGTH];
    printf("Enter the name of 10 sports: \n");
    for (i=0; i<10; i++) {
        scanf("%[^\n]%*c", sports[i]);
    }
    printf("\n");
    for (i=0; i<10; i++) {
        printf("Name: %s        Vowels: %d\n", sports[i], vowels(sports, i));
    }
}

int vowels(char s[MAX_STRINGS][MAX_LENGTH], int index) {
    int vowel_count=0, i;
/*     while (s[index][i] != '\0') 
    {
        if (s[index][i] == 'A' || s[index][i] == 'E' || s[index][i] == 'I' || s[index][i] == 'O' || s[index][i] == 'U' ||
            s[index][i] == 'a' || s[index][i] == 'e' || s[index][i] == 'i' || s[index][i] == 'o' || s[index][i] == 'u') {
            vowel_count++;
        }
        i++;
    } */
    for (i = 0; i < MAX_LENGTH; i++) {
        if (s[index][i] == 'A' || s[index][i] == 'E' || s[index][i] == 'I' || s[index][i] == 'O' || s[index][i] == 'U' ||
            s[index][i] == 'a' || s[index][i] == 'e' || s[index][i] == 'i' || s[index][i] == 'o' || s[index][i] == 'u') {
            vowel_count++;
        }
    }
    return vowel_count;
}