#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sec;
    int hrs;
    int mins;
    int secs;


//    printf("Enter numbers to be converted:");
  //  scanf("%d", &sec);

    sec = 7890;
    hrs = sec / 3600;
    mins = (sec-(3600*hrs))/60;
    secs = (sec-(3600*hrs)-(mins*60));

    printf("Hrs: %d Mins: %d Secs: %d", hrs, mins, secs);


    return 0;
}
