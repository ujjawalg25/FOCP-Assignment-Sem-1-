// Develop a C program to check whether a given number is an Armstrong number or not,
// demonstrating understanding of number manipulation and digit-based computations used in digital
// verification systems using for loop

#include <stdio.h>
#include <math.h>

int main()
{
    int num, ogNum, remainder, n = 0;
    float result = 0.0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    ogNum = num;

    for (ogNum = num; ogNum != 0; ++n)
    {
        ogNum /= 10;
    }
    ogNum = num;

    for (ogNum = num; ogNum != 0; ogNum /= 10)
    {
        remainder = ogNum % 10;
        result += pow(remainder, n);
    }

    if ((int)result == num)
        printf("%d is Armstrong number.", num);
    else
        printf("%d is not Armstrong number.", num);

    return 0;
}
