#include <stdio.h>

int main() 
{
    char c ;
    float a, b;
    printf("Enter number:\n");
    scanf("%f %f %c", &a, &b &c);

      switch (c)
   {
        case '+':
            printf("%.2f\n", a+b);
            break;
        case '-':
            printf("%.2f\n", a-b);
            break;
        case '*':
            printf("%.2f\n", a*b);
            break;
        case '/':
            if (b != 0)
                printf("%.2f\n", a / b);
            else
                printf("Error\n");
            break;
        default:
            printf("Invalid\n");
    }

    return 0;
}
