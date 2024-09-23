// largest between two numbers.
#include <stdio.h>
int main () {
    int num1,num2;
    printf("Enter the 1st Number:");
    scanf("%d",&num1);
     printf("Enter the 2nd Number:");
    scanf("%d",&num2);
    if (num1>num2) {
        printf("The 1st number is the greatest !");
    } else {
        printf("The 2nd Number is the greatest !");
    }
    return 0;
}