#include <stdio.h>
#include <math.h>
int main() {
	
	float x1, y1, x2, y2, distance;
	float a,b;
	printf("Enter the cordinates of (x1): ");
	scanf("%f", &x1);
	  
	printf("Enter the cordinates of (y1): ");
	scanf("%f", &y1);
	  
	printf("Enter the cordinates of (x2): ");
	scanf("%f", &x2);
	  
	printf("Enter the cordinates of (y2): ");
  	scanf("%f", &y2);
  	
  	a = x2 - x1;
  	b = y2 - y1;
  	
  	distance = sqrt(pow(a,2) + pow(b,2));
  	
  	printf("%.2f", distance);
	
  
  return 0;
}
