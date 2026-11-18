/*
 * Студент: Пылинский Даниил Максимович
 * Группа: ПИ 1-1
 * Лабораторная работа № 13
 * Назначение: Самостоятельная работа. Поиск минимума и максимума массива за один проход через указатели
 */

#include <stdio.h>

int min_max(const int a[], int n, int *lo, int *hi) {
    if (n <= 0) return 0;

    int min_val = a[0];
    int max_val = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] < min_val) min_val = a[i];
        if (a[i] > max_val) max_val = a[i];
    }

    *lo = min_val;
    *hi = max_val;
    return 1;
}

int main(void) {
    int a[] = {4, -2, 7};
    int lo, hi;

    lo = 99; hi = 99;
    if (min_max(a, 3, &lo, &hi))
        printf("n=3 -> Успех; lo=%d; hi=%d\n", lo, hi);
    else
        printf("n=3 -> Отказ; lo=%d; hi=%d\n", lo, hi);

    lo = 99; hi = 99;
    if (min_max(a, 1, &lo, &hi))
        printf("n=1 -> Успех; lo=%d; hi=%d\n", lo, hi);
    else
        printf("n=1 -> Отказ; lo=%d; hi=%d\n", lo, hi);

    lo = 99; hi = 99;
    if (min_max(a, 0, &lo, &hi))
        printf("n=0 -> Успех; lo=%d; hi=%d\n", lo, hi);
    else
        printf("n=0 -> Отказ; lo=%d; hi=%d\n", lo, hi);

    lo = 99; hi = 99;
    if (min_max(a, -1, &lo, &hi))
        printf("n=-1 -> Успех; lo=%d; hi=%d\n", lo, hi);
    else
        printf("n=-1 -> Отказ; lo=%d; hi=%d\n", lo, hi);

    return 0;
}
