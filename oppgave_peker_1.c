#include <stdio.h>

int *foo()
{
    int verdi = 204;
    int *verdi_peker = &verdi;
    return verdi_peker;
}

int main()
{
    int *p = foo();
    int verdi = *p;
    printf("p er %d\n", verdi);
    return 0;
}

/* перший  раз видало 204, потім помилку, потім 0. В чому проблема */

/*  */