#include<stdio.h>

int main(){
    int num, isPrime = 1, i;
    printf("Emter the number \n");
    scanf("%d", &num);
    if(num <= 1){
        isPrime = 0;
    }
    else {
        for(i = 2; i <= num/2; i++){
            if (num % i==0)
            {
                isPrime = 0;
                break;
            }
            
        }
    }
    if(isPrime){
        printf("The number %d is Prime number\n", num);
    }
    else{
        printf("The number %d is not a Prime number\n", num);
    }
    return 0;
}