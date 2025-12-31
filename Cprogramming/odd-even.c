#include<stdio.h>

int main(){
    int num;
    printf("Enter any number \n");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("The number is neutral");
    }
    else if(num%2==0){
        printf("The number is even");
    }
    else {
        printf("The number is odd");
    }

    return 0;
    
}