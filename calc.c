#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calc(double n1, char op, double n2)
{
    if (op == '+')
    {
        return n1 + n2;
    }
    else if (op == '-')
    {
        return n1 - n2;
    }
    else if (op == 'x' || op == '*')
    {
        return n1 * n2;
    }
    else if (op == '/')
    {
        return n1 / n2;
    }
    else
    {
        printf("Invalid Operator");
    }
}

int main(void)
{
    double n1;
    double n2;
    double result;
    char op;
    printf("x: ");
    scanf("%lf", &n1);
    printf("Enter an operator: ");
    scanf(" %c", &op);
    printf("y: ");
    scanf("%lf", &n2);
    result = calc(n1, op, n2);
    printf("%f", result);
}