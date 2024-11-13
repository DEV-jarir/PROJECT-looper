#include <stdio.h>

int main() {
    int num, fd, ld,sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    ld = num % 10;

    while (num >= 10) {
        num /= 10;
    }
    fd = num;

    sum = ld+fd;
    
    printf("Sum of first and last digits: %d\n", sum);
}
