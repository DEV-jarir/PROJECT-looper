#include <stdio.h>

int main() {
    int num,total;
	total=0;
    printf("Enter a number: ");
    scanf("%d", &num);

    int  sum = num;
    while (sum != 0) 
	{
        sum /=10;
        total++;
    }

    printf("Total number of digits in %d: %d\n", num, total);

}
