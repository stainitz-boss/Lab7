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

    switch (day)
    {
    case 1:
        printf("День недели: Понедельник");
        break;
    case 2:
        printf("День недели: Вторник");
        break;
    case 3:
        printf("День недели: Среда");
        break;
    case 4:
        printf("День недели: Четверг");
        break;
    case 5:
        printf("День недели: Пятница");
        break;
    case 6:
        printf("День недели: Суббота");
        break;
    case 7:
        printf("День недели: Воскресенье");
        break;
    }

    return 0;
}
