#include <stdio.h>
#include <stdlib.h>

int main()
{
        int day, cent;
    cent = 10;
    day = 1;
    while(day <= 15){
        printf("day %d : %d cent \n", day,cent );
        cent = cent*2;
        day++;

    }
       return 0;
}

