#include<stdio.h>
int main()
{

    int a, i=1;
    int f=1;
    scanf("%d",&a);
    while(i<=a)
    {
        f=f*i;
        ++i;
    }
    printf("Factorial of %d is %d",a,f);

    return 0;
}
