#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int same = 1; // assume strings are same

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Compare character by character
    int i = 0;
    while (str1[i] != '\0' && str1[i] != '\n' && str2[i] != '\0' && str2[i] != '\n') {
        if (str1[i] != str2[i]) {
            same = 0; // strings are different
            break;
        }
        i++;
    }

    // If lengths are different
    if ((str1[i] != '\0' && str1[i] != '\n') || (str2[i] != '\0' && str2[i] != '\n')) {
        same = 0;
    }

    if (same) {
        printf("Strings are the same.\n");
    } else {
        printf("Strings are different.\n");
    }

    return 0;
}
