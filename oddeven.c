//Number +ve or -ve and also check odd or even using if-else.
#include <stdio.h>
int main () {
    int num;
    printf("Enter the Number:");
    scanf("%d",&num);
    if (num>=0) {
        printf("the number is positive !\n");
        if (num%2==0) {
            printf("And it is Even !");
        }else {
            printf ("The Number is Odd !");
        }
    } else {
        printf("\nThe Number is Negative !\n");
        if (num%2==0) {
            printf("And it is Even !");
        }else {
            printf ("The Number is Odd !");
    } }
    return 0;
}