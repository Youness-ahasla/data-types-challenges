#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float r, c;
	const float pi = 3.141592653589793238;
	
	printf("Enter radius of a circle: ");
	scanf("%f", &r);
	
	c = 2*pi*r;
	
	printf("The circumference of this circle is: %.2f", c);
	
	return 0;
}
