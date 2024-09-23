// ternary operator
#include<stdio.h>
int main () {
    int num,check;
    printf("enter the number:");
    scanf("%d",&num);
    check=(num>35)?'t':'f'; //ternary can take only boolean (only 1) expression.
    printf("ans:%c",check); //%c for char or can take %d for 0 ya 1.
    return 0;
}