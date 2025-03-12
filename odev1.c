#include <stdio.h>

int main()
{
    int length1, length2, area;

    printf("enter length 1: ");
    scanf("%d",&length1);

    printf("enter length 2: ");
    scanf("%d",&length2);

    area = length1*length2;
    printf("area: %d", area);
}
