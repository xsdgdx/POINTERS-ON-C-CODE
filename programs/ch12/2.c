#include<stdio.h>

Node *search(Node **head,int const value)
{
    Node *p;
    while((p = *head)!= NULL &&(p->value!=value))
    {
        head = &head->link;
    }
    return p;
}