//provide menu for add,sub and perform it.
#include <stdio.h>
int main () {
    int num1,num2,num3;
    printf("Enter the 1st num :");
    scanf("%d",&num1);
    printf("Enter the 2nd num :");
    scanf("%d",&num2);
    printf("menu\n for add press 1,for sub press 2:");
    scanf("%d",&num3);
    if (num3==1) {
        printf("It's addition is: %d",num1+num2);
        }else if (num3==2) {
            printf("It's sub is: %d",num1-num2);
        }
    else{
        printf("Not a valid operation entered !");
    }
    return 0;
}