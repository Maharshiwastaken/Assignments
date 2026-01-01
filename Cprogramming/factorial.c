#include<stdio.h>

int main(){
    int num, i, factorial, temp = 1;
    printf("Enter the number\n");
    scanf("%d", &num);
    if(num < 0){
        printf("Factorial cannot be find\n");
    }
    else if (num = 0)
    {
       printf("the factorial of 0 is 1\n");
    }
    else{
        for(i=1;i<=num;i++){
            factorial = num*temp;
            temp = num - i;

        }
        printf("factorial = %d", factorial);
    }
    return 0;
    
}