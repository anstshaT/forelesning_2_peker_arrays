#include <stdio.h>

int main()
{
    int tall;
    printf("Skriv tall");
    scanf("%d", &tall);
    printf("Tallet er %d\n", tall); /* копіюється у функцію */

    return 0;
}
