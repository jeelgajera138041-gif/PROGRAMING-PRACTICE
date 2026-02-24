#include <stdio.h>
#include <string.h> // for strlen

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read string with spaces

    // Remove newline character if present
    int len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--; // adjust length
    }

    printf("Reverse of the string is: ");

    // Print string in reverse
    for(int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}
