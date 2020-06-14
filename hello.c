#include <stdio.h>
#include<cs50.h>

//Our green button
int main(void)
{
    //getting input and storing it in the variable name and then printing it.
    string name = get_string("What's your name?\n");
    printf("Hello,%s!\n", name);
}
