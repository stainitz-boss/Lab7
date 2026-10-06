#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    float x, y;
    char c;

    printf("Введите выражение: ");
    scanf("%f%c%f", &x, &c, &y);

    switch (c)
    {
    case '+':
        printf("= %f\n", x + y);
        break;
    case '-':
        printf("= %f\n", x - y);
        break;
    case '*':
        printf("= %f\n", x * y);
        break;
    case '/':
        printf("= %f\n", x / y);
        break;
    case '^':
        printf("= %f\n", pow(x, y));
        break;

    default:
        printf("Неизвестная операция: '%c'\n", c);
    }

    return 0;
}
