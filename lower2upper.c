//change lowercase to uppercase.
#include <stdio.h>
int main () {
    char ch;
    printf("Enter the 1st num :");
    scanf("%c",&ch);
    if (ch>='a' && ch<='z') { //a=97 and z=122
        printf("the Upper case of it is : %c",ch-32); //A=65 AND Z=90
    } else {
        printf("not valid !");
    }
    return 0;
}