#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 2, b = 10, c = 50;
    float f = 1.05, g = 25.5, h = -0.1, percentage;

    printf("3 integers        : %d %d %d\n", a, b, c);
    printf("3 integers [TAB]  : %d \t %d \t %d\n", a, b, c);

    printf("\n");

    printf("3 real number  (side by side)   : %f %f %f\n", f, g, h);
    printf("3 real number (one under the other)    : \n%f\n%f\n%f\n\n", f, g, h);

    percentage = 220 * 25 / 100.0;
    printf("25%% of 220 is %f \n", percentage);
    printf("%f/%f = %f\n", g, f, g / f);



    printf("\nproduce a beep sound at the en of the program...\a");
    return 0;
}