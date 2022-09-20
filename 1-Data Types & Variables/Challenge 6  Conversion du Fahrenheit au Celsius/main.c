#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float fahrenheit, celsius;
	printf("Enter temprature in fahrenheit: ");
	scanf("%f", &fahrenheit);
	celsius = (fahrenheit-32)/1.8;
	printf("%f in Celsius.", celsius);
	return 0;
}
