#include<stdio.h>

int main(){
    int num, i, factorial = 1;
    printf("ENter the number \n");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("The factorial of 0 is 1");
    }
    else if(num < 0){
        printf("Invalid number");
    }
    else{
        for(i = 1; i<=num; i++){
            factorial = factorial * i;
        }
        printf("The factorial of %d is %d", num, factorial);
    }
    return 0;
}