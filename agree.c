#include<cs50.h>
#include<stdio.h>

int main(void)
{
    char c = get_char("This should be a bool but I am doing it in for learning\n> ");

    if (c=='y' || c=='Y')
    {
        printf("Agree.\n");
    }
    else
    {
        printf("Not Agreed.\n");
    }
}
