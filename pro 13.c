#include <stdio.h>
#include <string.h> // for strlen

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read string with spaces

    // Remove newline character if present
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    printf("Length of the string is: %lu\n", strlen(str));

    return 0;
}
