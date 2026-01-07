#include<stdio.h>

int main(){
    int i, j, k, num;

    printf("Enter the number\n");
    scanf("%d", &num);
    for(i=num; i>=1; i--){
        for(j=1;j<=i;j+2){
            if(j%2 != 0){
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}