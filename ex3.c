#include <stdio.h>

int main() {
    int num1, num2, sum;
    printf("Enter the first integer:< ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    sum = num1 + num2;

    if (num1 == num2) {
        sum *= 3;
    }

    printf("The result is: %d\n", sum);
    return 0;
}

