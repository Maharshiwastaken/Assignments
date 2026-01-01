//WAP in c to check wheather the character given by user is alphabet or not
#include<stdio.h>

int main(){
    char ch;
    printf("Alphabet or not\n\n\n\n");
    printf("Press any character \n");
    scanf(" %c", &ch);
    printf("You entered %c", ch);

    if(('A' <= ch && ch <= 'Z') || ('a' <= ch && ch <= 'z')){
        printf("The character %c is alphabet\n", ch);
    }
    else{
        printf("The character %c is not alphabet\n", ch);

    }
    return 0;
}