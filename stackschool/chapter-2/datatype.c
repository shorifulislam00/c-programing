#include <stdio.h>

int main()
{
    int num = 45;
    float num2 = 55.45f;
    char ch = 'S';

    num = num2;     // type change here

    printf("Integer num = %d\n", num);
    printf("Float num2 = %f\n", num2);
    printf("Character ch = %c\n", ch);

    return 0;
}