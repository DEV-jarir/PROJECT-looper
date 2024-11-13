#include <stdio.h> 
main() {
	char alpha;
	printf("enter any alphabet:");
	scanf("%c",&alpha);
	do {
		alpha +=3;
		printf("%c\n\n",alpha);
		
	}
	while (alpha<='z');
}

