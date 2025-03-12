#include <stdio.h>

int main()
{
    int number;
    float pi;
    char letter;

    printf("Write a number: ");
    scanf("%d",&number);

    printf("Write the pi: ");
    scanf("%f",&pi);

    printf("Write a letter: ");
    scanf(" %c",&letter); // Takes the value entered with space

    printf("The number you wrote: %d\n",number);
    printf("The pi number you wrote: %.2f\n",pi);
    printf("the letter you wrote: %c\n",letter);

    return 0;
}

