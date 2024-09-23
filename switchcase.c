//switch case days.
#include <stdio.h>
int main () {
    int days;
    printf("Enter the day between 1-4:");
    scanf("%d",&days);
    switch (days) {
        case 1:printf("Mon\n");
        break;
         case 2:printf("Tue\n");
        break;
         case 3:printf("Wed\n");
        break;
         case 4:printf("Thurs\n");
        break;
        default: printf("Not valid day !");
    } 
    return 0;
}