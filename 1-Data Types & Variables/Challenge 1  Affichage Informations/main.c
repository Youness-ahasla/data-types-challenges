#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Challenge 1 : Affichage Informations

int main() {
	char firstName[20], lastName[25], gender[20], phoneNum[30];
	int age;
	
	printf("What is your first name? ");
	scanf("%s", firstName);
	
	printf("What is your last name? ");
	scanf("%s", lastName);
	
	printf("How old are you? ");
	scanf("%d", &age);

	printf("What is your gender? ");
	scanf("%s", &gender);

	printf("What is your phone number? ");
	scanf("%s", &phoneNum);

	printf("\nThis is your info:\n\n");
	printf("Your first name is %s.\n", firstName);
	printf("Your last name is %s.\n", lastName);
	printf("You are %d years old.\n", age);
	printf("Your gender is %s.\n", gender);
	printf("Your phone number is %s.\n", phoneNum);
	
	
	
	
	
	
	
	
	
	
}
