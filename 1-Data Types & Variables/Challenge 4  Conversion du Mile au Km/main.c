#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
    
    float mile, meter, kilometer;
    
    printf("Type distance in mile: ");
    scanf("%f",  &mile);
    
    kilometer = mile/1.609;
    meter = kilometer /1000;
    
    printf("%f in meter", meter);
    
    return 0;
}
