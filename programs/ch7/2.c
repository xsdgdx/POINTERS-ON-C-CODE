#include<stdio.h>

int gcd(int M,int N);

int main()
{
    int M,N;
    int G;
    scanf("%d %d",&M,&N);
    printf("%d",gcd(M,N)); 
    return 0;
}

int gcd(int M,int N)
{
    if(M % N == 0)
        return N;
    else return gcd(N,(M % N));
}