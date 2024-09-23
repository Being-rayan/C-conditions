// check a program for balik or not with the if-else condition.
#include <stdio.h>
int main () {
    int age;
    printf("enter the age:");
    scanf("%d",&age);
    if (age>18) {
        printf("Balik");} else {
            printf("not balik"); 
        }
    return 0;
}