#include <stdio.h>

int main() 
{
    float a, b, c;
    printf("Enter 3 numbers:\n");
    scanf("%f %f %f", &a, &b, &c);

    (a + b > c && a + c > b && b + c > a) ? printf("Valid Triangle\n") : printf("Invalid Triangle\n");

    return 0;
}
