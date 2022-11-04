#include <stdio.h>

int main(void)
{
    long x, y, z;
    
    // Prompt user for x
    printf("x: ");
    scanf("%li", &x);
    
    // Prompt user for y
    printf("y: ");
    scanf("%li", &y);
    
    // Perform addition
    z = x + y;
    printf("x + y = %li\n", z);
}
