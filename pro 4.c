#include <stdio.h>

int main() {
    int n, num;
    int positive = 0, negative = 0, even = 0, odd = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &num);

        if(num > 0)
            positive++;
        else if(num < 0)
            negative++;

        if(num % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("\nPositive numbers: %d", positive);
    printf("\nNegative numbers: %d", negative);
    printf("\nEven numbers: %d", even);
    printf("\nOdd numbers: %d", odd);

    return 0;
}
