#include<stdio.h>
char* gradeFunction(double averageMarks){
    if(averageMarks >= 90){
        return "A+";
    }
    else if(averageMarks >=80){
        return "A";
    }
    else if(averageMarks >= 70){
        return "B+";
    }
    else if(averageMarks >=60){
        return "B";
    }
    else if(averageMarks >= 50){
        return "C+";
    }
    else if(averageMarks >= 40){
        return "C";
    }
    else{
        return "F";
    }
}

int  main(){

    int subjects, i, subNum;
    float marks, totalMarks, averageMarks;
    printf("Average Result Calculator\n");
    printf("\n\n\n");

    printf("Enter how many subjects: ");
    scanf("%d", &subjects);
    
    for(i=1;i<=subjects;i++){
        printf("Enter Grade %d: ", i);
        scanf("%f", &marks);
        totalMarks = totalMarks + marks;

    }
    averageMarks = totalMarks/subjects;

    printf("Average Marks = %f", averageMarks);

    printf("Grade = %s", gradeFunction(averageMarks));
    return 0;
}

void averageMarks() {
    


}