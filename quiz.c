#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// generates a new question
double question(double n1, char op, double n2)
{
    double a;
    // Ask question
    printf("%f%c%f", n1, op, n2);
    // Prompt for answer
    printf("Answer: ");
    // Capture answer
    scanf("%lf", a);
    return a;
}

// checks given answer against correct answer to verify correctness
double checkAnswer(double givenAnswer, double correctAnswer)
{
    double count = 0;
    if (givenAnswer == correctAnswer)
    {
        // Increment Mark by 1 if answer is correct
        count++;
    }
    return count;
}

// Assign a grade symbol based on the mark count
char evaluateGrade(double markCount)
{
    char g;
    if (markCount == 3)
    {
        g = 'A';
    }
    else if (markCount == 2)
    {
        g = 'C';
    }
    else if (markCount <= 1)
    {
        g = 'F';
    }

    return g;
}

// Give feedback based on the grade symbol
void gradeFeedback(char grade)
{
    switch (grade)
    {
    case 'A':
        printf("Well done, you're doing so well!");
        break;
    case 'B':
        printf("You're doing alright!");
        break;
    case 'C':
        printf("Not bad, could be better though.");
        break;
    case 'D':
        printf("You can definitely do better than this...");
        break;
    case 'F':
        printf("Unacceptable, I know you can do better than this.");
        break;
    default:
        printf("Enter a Grade to get feedback");
        break;
    }
}

int main(void)
{
    // question 1 nums, operation & solution
    double q1n1 = 10;
    char q1op = '-';
    double q1n2 = 2;
    double sltn1 = 8;
    // question 2 nums, operation & solution
    double q2n1 = 2;
    char q2op = '*';
    double q2n2 = 5;
    double sltn2 = 10;
    // question 3 nums, operation & solution
    double q3n1 = 20;
    char q3op = '/';
    double q3n2 = 4;
    double sltn3 = 5;
    // user answers
    double a1;
    double a2;
    double a3;
    double markCount;
    char grade;
    printf("Enter the correct answer to the following questions:\n");
    a1 = question(q1n1, q1op, q1n2);
    checkAnswer(a1, sltn1);
    a2 = question(q2n1, q2op, q2n2);
    checkAnswer(a2, sltn2);
    a3 = question(q3n1, q3op, q3n2);
    markCount = checkAnswer(a3, sltn3);
    grade = evaluateGrade(markCount);
    printf("%d\n", markCount);
    gradeFeedback(grade);
}