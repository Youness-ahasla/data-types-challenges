#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
   float f, c;
   printf("Enter degree in fahrenheit: \n");
   scanf("%f",&f);
   c = (f - 32)*5/9;
   printf("Celsius: %f \n", c);
   if( c > 35) {
   printf("very hot");
   }else if(c > 20){
   	printf("hot");
   }else if(c > 0){
   	printf("cold");
   }else{
   	printf("very cold");
   }
   return 0;
}
