#include <stdio.h>

int main(void)
{
    int n;
    printf("n: ");
    scanf("%i", &n);

    // If n is even
    if (n % 2 == 0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
}