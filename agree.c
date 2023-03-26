#include<cs50.h>
#include<stdio.h>

int main(void)
{
    char c = get_char("This should be a bool but I am doint in for learning\n> ");

    if (c=='y')
    {
        printf("Agree.\n");
    }
    else
    {
        printf("Not Agreed.\n");
    }
}