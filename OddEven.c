#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int num1;
    int num2;
    printf("Enter a Value to be Determined: ");

    scanf(" %d", &num);

    num1 = num;

    num2 = num % 2;

    if (num2 == 0)
    {
        printf("The number you entered is an EVEN number");
    }
else{
    printf("Then number you entered is an ODD number");
}



    return 0;
}
