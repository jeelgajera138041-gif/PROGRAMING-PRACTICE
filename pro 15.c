#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, spaces = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read string with spaces

    for(int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char ch = str[i];

        // Check for spaces
        if(ch == ' ') {
            spaces++;
        }

        // Check for vowels (both uppercase and lowercase)
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of spaces: %d\n", spaces);

    return 0;
}
