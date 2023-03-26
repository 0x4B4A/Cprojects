#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("What's int?\n> ");
    int y = get_int("What's int2?\n> ");

    if(x<y)
    {
        printf("int2 is bigger than int\n");
    }
    else if(x>y)
    {
        printf("int is bigger than int2\n");
    }
    else
    {
        printf("both are equal\n");
    }
}