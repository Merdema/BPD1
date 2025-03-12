#include <stdio.h>

int main()
{
    printf("%-10s\n", "Ahmet"); //left-aligned
    printf("%10s", "Mehmet\n"); //right-aligned
    printf("%5d\n", 42); //5-character width
    printf("%.3f\n", 3.14159); //round to 3 decimal places
}
