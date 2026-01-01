//Program in C to calculate simple interest and compound interest

#include<stdio.h>
#include<math.h>

int main(){
    float p, t, r, n, SI, CI;
    int choice;
    //p = principle, t = time, r = rate & n = number of intrest compunded per year

    printf("Choose one:\n");
    printf("1. Simple Interest\n");
    printf("2. Compound Interest\n");
    scanf("%d", &choice);

    switch(choice){
        case 1:
        printf("Enter principle Time & Rate\n");
        scanf("%f%f%f", &p, &t, &r);

        SI = p*t*r/100;
        printf("Simple Interest : %f\n", SI);
        break;

        case 2:
        printf("Enter Principle, TIme, Rate and number of interest compounded per year\n");
        scanf("%f%f%f%f", &p, &t, &r, &n);

        CI = p* pow((1+r/n),(n*t));
        printf("Compound Interest: %f\n", CI);
        break;

        default:
        printf("Invalid Choice\n");
    }
    return 0;
}