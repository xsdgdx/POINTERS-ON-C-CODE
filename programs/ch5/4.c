#include<stdio.h>

unsigned int reverse_bits(unsigned int);

int main()
{
    unsigned int value=25;
    printf("%u",value);
    unsigned int i = reverse_bits(value);
    printf("%u",i);
    return 0;
}

unsigned int reverse_bits(unsigned int value)
{
    unsigned int dst = 0;
    int i;
    for(i = 1; i != 0; i <<= 1){
        dst <<= 1;
        if(value & 1)//当value的最后以为不是为1时 value&1的返回值为1（不然返回值为零）之后将1与dst相或，把1添加到dst的最后一位中。
            dst |= 1;
//      dst <<= 1;    
        value >>= 1;
    }
    return dst;
}