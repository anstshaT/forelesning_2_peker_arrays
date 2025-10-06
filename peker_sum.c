#include <stdio.h>

int main()
{
    int a = 4;
    int b = 9;
    int tall_sum = a + b; /* Зрааз сума має своє місце в памʼяті та можна поставити показник на нього */
    int *tall_sum_peker = &tall_sum;
    printf("Summen av de to tallene er: %d", *tall_sum_peker);
}