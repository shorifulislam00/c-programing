#include <stdio.h>

int abc = 500;

int main()
{
    // int first = 45;
    // printf("first = %d", first);
    // printf("\nfirst + 5 = %d", first + 5);
    // printf("first - 5 = %d\n", first - 5);
    // printf("\nfirst * 5 = %d", first * 5);
    // printf("first / 5 = %d\n", first / 5);

    int a = 50;
    int b = 30;

    int c;
    c = 100;

    // int c = 50;

    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d / %d = %d\n", a, b, a/b);
    
    printf("Global abc = %d\n", abc);
    printf("C = %d", c);

    return 0;
}