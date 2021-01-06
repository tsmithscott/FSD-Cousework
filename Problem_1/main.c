#include <stdio.h>
#include <ctype.h>

int check_format(char *password);

int main() {
    char password[9];

    printf("Enter a password in the following format:\nL5e$e55e\n\n");
    fgets(password, 9, stdin);
    if (check_format(password)==1) {
        printf("\nPassword is compliant with the format");
    }

    else {
        printf("\nPassword is not compliant with the format");
	}
    return 0;
}

int check_format(char *password) {
  	if (isupper(password[0])==1 &&
      	isdigit(password[1])==1 &&
      	islower(password[2])==1 &&
      	ispunct(password[3])==1 &&
      	islower(password[4])==1 &&
      	isdigit(password[5])==1 &&
      	isdigit(password[6])==1 &&
      	islower(password[7])==1) {
    	return 1;
	}
	else {
    	return 0;
  	}
}
