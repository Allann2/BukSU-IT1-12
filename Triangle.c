#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, sum;
printf("Enter 3 angles of a triangle: \n");
scanf("%d %d %d", &a, &b, &c);

sum = a + b + c;

if (sum == 180){

    printf("The triangle is VALID");
}else{
printf("The triangle is INVALID");}
    return 0;
}
