#include <stdio.h>

int main(void)
{
    int points;
    printf("How many points did you lose? ");
    scanf("%i", &points);

    if (points < 2)
    {
        printf("You lost fewer points than me.\n");
    } 
    if (points > 2)
    {
        printf("You lost more points than me.\n");
    }
    else
    {
        printf("You lost same points as me");
    }
}