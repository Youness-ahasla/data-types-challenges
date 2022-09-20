#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int numOne, numTwo;
	char op;
	
	printf("Enter the first number: ");
	scanf("%d", &numOne);
	
	printf("choose your operator: ");
	scanf(" %c", &op);
	
	printf("Enter the second number: ");
	scanf("%d", &numTwo);
	
	
	if (op == '+'){
		printf("%d", numOne + numTwo);
	}if (op == '-'){
		printf("%d", numOne - numTwo);
	}else if (op == '*'){
		printf("%d", numOne * numTwo);
	}else if (op == '/'){
		printf("%d", numOne / numTwo);
	}else if (op == '%'){
		printf("%d", numOne % numTwo);
	}
	return 0;
}
