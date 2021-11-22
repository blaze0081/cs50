#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    //Enter a positive integer
    do
    {
        n = get_int("Height: \n");
    }
    while (n < 1 || n > 8);

    //Processing
    int a = n - 1;
    int b = 1;
    while (a != -1)
        //Print single row of " "
    {
        for (int i = 0; i < a; i++)
        {
            printf(" ");
        }
        //Print single row of #
        for (int i = 0; i < b; i++)
        {
            printf("#");
        }
        printf("\n");
        a--;
        b++;
    }
    printf("\n");
}