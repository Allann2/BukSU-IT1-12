#include <stdio.h>
#include <stdlib.h>

int main()
{

    int value, newValue, max, divisibleChecker;
    newValue = 0;
    value = 1;

    printf("Enter the Value for the Maximum Number Range: ");
    scanf("%d", &max);

    do{
        divisibleChecker = value % 3;


        if( divisibleChecker != 0 ){

            printf(" %d\n ", value);

            if( divisibleChecker != 0 ){

                newValue = newValue + value;
            }

            value++;
        }else{
            value++;
        }

    }while(value <= max);
    printf("\n\n\n Numbers divisible by 3 are excluded \n\n\n Total: %d \n\n\n", newValue);
}
