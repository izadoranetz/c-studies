#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <conio.h>


int main()
{

    char option;
    float grade1, grade2, grade3, mean;

    printf("Mean Calculator.\n");
    printf("Pick the type of Mean:\n");
    printf("Type A for Arithmetic Mean\n");
    printf("Type W for Weighted Mean (Weights: 5,3,2)\n");
    printf("Type H for Harmonic Mean\n");
    scanf("%c", &option);
    option = toupper(option);

    printf("Inform the first grade: ");
    scanf("%f", &grade1);

    printf("Inform the second grade: ");
    scanf("%f", &grade2);

    printf("Inform the third grade: ");
    scanf("%f", &grade3);

    switch (option){
        case 'A':
            mean = (grade1+grade2+grade3)/3;
            printf("Mean: %.2f", mean);
            break;

        case 'W':
            mean = ((grade1*5)+(grade2*3)+(grade3*2))/(5+3+2);
            printf("Mean: %.2f", mean);
            break;

        case 'H':
            mean = 3 / (1/grade1 + 1/grade2 + 1/grade3);
            printf("Mean: %.2f", mean);
            break;

        default:
            printf("Invalid option");
            break;
    }

    return 0;
}