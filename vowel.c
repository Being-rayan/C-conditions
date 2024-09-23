//Check if it's vowel or not.
#include <stdio.h>
int main () {
    char alph;
    printf("Enter the Alphabet:");
    scanf("%c",&alph);
    if (alph == 'a' || alph == 'e' || alph == 'i' || alph == 'o' || alph == 'u' ||alph == 'A' || alph == 'E' || alph == 'I' || alph == 'O' || alph == 'U') {
        printf("Its'a vowel !");
    } else{
        printf("Not a vowel !");
    }
    return 0;
}