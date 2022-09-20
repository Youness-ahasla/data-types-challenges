#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float width, length, circumference;
	
	printf("Enter the (width) of the rectangle: ");
	scanf("%f", &width);
	
	printf("Enter the (length) of the rectangle: ");
	scanf("%f", &length);
	
	circumference = 2*(width + length);
	
	printf("The circumference of this rectangle is %.2f.", circumference);
	return 0;
}
