#include<stdio.h>
#include<math.h>

int main(){
    int num, digit, sum = 0, i;
    printf("Enter any number \n");
    scanf("%d",&num);

   while(num>0){
       digit = num % 10;
       sum = sum + digit;
       num = num / 10;
   }
   printf("The sum of digits is %d", sum);
   return 0;
}