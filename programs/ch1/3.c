#include<stdio.h>


int main()
{
    int checksum = -1;
    char c;
    while((c=getchar()) != EOF&& c !='\n')
    {
        putchar(c);
        checksum += c;
    }
    printf("\n%d",checksum);
    return 0;
}
