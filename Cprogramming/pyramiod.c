#include<stdio.h>

int main() {
    int i, j, k, num;

    printf("Enter the number\n");
    scanf("%d", &num);

    for(i=1; i<=num; i++){
       
        for(j=1; j<=i; j++){
            
            if (i %2 != 0)
            {
                printf("*");
            }
            
            
        }
        printf("\n");
    }
    return 0;
}