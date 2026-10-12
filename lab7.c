#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "RUS");

    int k, d1, day;

    printf("Введите номер дня года k (1..365): ");
    scanf("%d", &k);

    printf("Введите день недели 1 января (1=Пн, ..., 7=Вс): ");
    scanf("%d", &d1);

    day = (d1 + k - 2) % 7 + 1; //расчёт дня недели k-го дня

    printf("День недели: %d\n", day);

    return 0;
}
