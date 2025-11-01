// Write a program to determine whether a student has passed or failed. To pass, a student requires a total of 40% and at least 33% in each subject. Assume there are three subjects and take the marks as input from the user.

#include<stdio.h>

int main() {
    // Declare 3 variables to store the marks 
    int mark1, mark2, mark3;
    int total_marks, percentage;
    int max_marks = 100;

    // Take the marks from the user
    printf("Enter the marks for subject 1: ");
    scanf("%d", &mark1);
    printf("Enter the marks for subject 2: ");
    scanf("%d", &mark2);
    printf("Enter the marks for subject 3: ");
    scanf("%d", &mark3);

    total_marks = mark1 + mark2 + mark3;
    printf("Total Marks: %d\n", total_marks);

    percentage = (total_marks / (3.0 * max_marks)) * 100;
    printf("Total Percentage: %d\n", percentage);

    // To check whether a student is pass or not
    if ((percentage >= 40) && (mark1 >= 0.33 * max_marks) && (mark2 >= 0.33 * max_marks) && (mark3 >= 0.33 * max_marks)) 
    {
        printf("Congratulation! You have cleared your examination.");
    }
    else {
        printf("Sorry, You are failed !");
    }
    

    return 0;
} 