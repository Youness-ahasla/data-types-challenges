#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char num[3];
	
	printf("Enter a number of three digits: ");
	scanf("%s", &num);
	
	printf("%c", num[2]);
	printf("%c", num[1]);
	printf("%c", num[0]);

}
