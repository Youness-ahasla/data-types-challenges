#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int celsius, fahrenheit;
	printf("Enter degree in Celsius: ");
	scanf("%d", &celsius);
	
	fahrenheit = (celsius*1.8)+32;
	printf("%d in fahrenheit", fahrenheit);
	return 0;
}
