//Check if it's leap year.
#include <stdio.h>
int main () {
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    if (year%4==0 && year%100!=0) //logic for leap year.
    {
        printf("Its'a leap year !");
    } else{
        printf("Not a leap year !");
    }
    return 0;
}