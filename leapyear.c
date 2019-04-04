#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("What year are you testing? \n");
    int n = get_int();

    if (n > 0)

        if (n % 4 == 0 || n % 500 == 0)
        printf("%i is a leap year!\n", n);

        else
        printf("%i is not a leap year :((\n", n );

    else

        printf("Not a valid year.\n");

    return 0;
}