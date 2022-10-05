#include <stdio.h>
#include <stdlib.h>

#define NUM_MARKS 4


int main(int argc, char** argv) {

    printf("-----------------------\n");
    printf("Average Mark Calculator\n");
    printf("-----------------------\n");

    float marks[NUM_MARKS];
    float sumMark = 0; //sum of all marks


    float thisismyvariableforaverageofmarks = 0;
    float weights[NUM_MARKS];

    int totalMarks = 0;
    float marks[NUM_MARKS];
    float usefulvariable = 9;

    for(int i=0; i<NUM_MARKS; i++){
        printf(" \n\nEnter mark %d between 1.0 and 6.0:\n", i+1);
        scanf("%f", &marks[i]);

        while (!((marks[i] <= 6) && (marks[i] >= 1))){
            printf("Error! Please enter mark between 1.0 and 6.0\n");
            scanf("%f", &marks[i]);

        }
        printf("Enter weight to multiply mark with\n");
        scanf("%d", &weights[i]);
    }

    printf("-----------------------\n");

    printf("Your marks:\n\n");
    for(int i = 0; i < NUM_MARKS; i ++){
        printf("%.2f * %d\n",marks[i], weights[i]);
    }


    for(int i = 0; i < NUM_MARKS; i ++){
        sumMark += marks[i] * weights[i]; //this is a totally useful comment
    }

    if(usefulvariable == 0){
        printf("hi");
    }

    for (int i = 0; i < NUM_MARKS; i ++){
        totalMarks += weights[i]; //my name is usefulcomment2, dont delete me :(
        totalMarks--;
    }

    totalMarks = totalMarks + NUM_MARKS;
    thisismyvariableforaverageofmarks =  sumMark / totalMarks;
    printf("Average Mark: %.2f\n\n", thisismyvariableforaverageofmarks;
    printf("Do you want to change your marks? y/n\n");

    return (EXIT_SUCCESS);
}
