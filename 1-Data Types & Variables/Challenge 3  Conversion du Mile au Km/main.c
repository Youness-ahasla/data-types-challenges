#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float fahrenheit, celsius;
	printf("Enter degree in fahrenheit: ");
	scanf("%f", &fahrenheit);
	
	celsius = (fahrenheit-32)/1.8;
	printf("%f\n", celsius);
	
		
	if (celsius > 35){
		printf("Very hot");
	}else if (celsius > 25 && celsius < 35){
		printf("Hot");
	}else if (celsius < 25 && celsius > 10){
		printf("Cold");
	}else if (celsius <= 10){
		printf("Very Cold");
	}
	return 0;
}
