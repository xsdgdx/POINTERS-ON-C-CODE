#include<stdio.h>

int countnode(Node  **p)
{
    int count = 0;
    while(*p->link != NULL)
    {
        count++;
        p = &p->link;
    }
    return count;
}