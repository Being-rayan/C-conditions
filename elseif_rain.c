// else-if condition (3 types of rain condition)
#include <stdio.h>
int main () {
    int rain;
    printf("enter the value of rain in mm:");
    scanf("%d",&rain);
    if (rain<2.5) {
        printf("kinda heavy rain"); } 
    else if (rain>2.5) {
            printf("very heavy rain");
        }
    else {
            printf("not so heavy rain");
        }
 return 0;
} 