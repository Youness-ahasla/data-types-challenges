#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float numOne, numTwo, numThree, sum, average;
	
	printf("Enter three numbers:\n");
	scanf("%f", &numOne);
	scanf("%f", &numTwo);
	scanf("%f", &numThree);
	
	sum = numOne + numTwo + numThree;
	average = sum/3;
	
	printf("The sum is: %.2f.\n", sum);
	printf("The average is: %.2f", average);
	

}
