#include<stdio.h>


int main()
{
    int brackets_head = 0;
    char ch;
    while ((ch = getchar()) !='\n')
    {
        if(ch == '{')
        {
            brackets_head += 1;
        }
        else if(ch == '}')
        {
            brackets_head -= 1;
        }
    }
    if(brackets_head != 0)
    {
        printf("error");
    }
    else {
        printf("yes");
    }

    return 0;
}