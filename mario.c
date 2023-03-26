#include<stdio.h>
#include<cs50.h>

int get_size(void);
void make_grid(int size);

int main(void)
{
    int n = get_size();

    make_grid(n);
}







// stuff (i forgot what this is called its 4am)
int get_size(void)
{
    // Get Size
    int n ;
    do
    {
        n=get_int("Size\n> ");
    }
    while(n<1);
    return n;
}

void make_grid(int size)
{
    // Print Block
    for(int i=0; i<size; i++)
    {

        for(int j=0; j<size; j++)
        {
            printf("#");
        }

        printf("\n");
    }
}