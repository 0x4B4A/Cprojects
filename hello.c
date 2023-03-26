#include<cs50.h>
#include<stdio.h>

int main(void)
{
    string ans = get_string("What's your name?\n> ");
    string age = get_string("What's your age?\n> ");
    printf("hello, %s. you are %s years old. \n", ans, age);
}