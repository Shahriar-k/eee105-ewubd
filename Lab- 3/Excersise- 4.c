/* In this exercise you need to write a program that will take an integer input
representing year and print whether this is a leap year or not leap year.
*/ 
#include <stdio.h>

int main(){
    int year;
    printf("Enter a year: ");

    scanf("%d",&year);
    if(year % 4 == 0)
    {
        if(year % 100 == 0)
        {
            if(year % 400 == 0)
            printf("%d is a leap year.",year);
            else
            printf("%d is not leap year",year);
        }
    else
        printf("%d is a leap year", year);
    }
    else
    printf("%d is not leap year.", year);
    
    return 0;
}
