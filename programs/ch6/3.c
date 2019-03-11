/*写到这一题的时候，就明白了上面一道题，原因是，当我在main函数里
声明char * string = "ABCDEFG"时，就出现了错误
而我改为char string[] = "ABCDEFG"时，函数就没有一点问题
关于字符指针和字符数组的问题，我将在文章末尾表述我的认识*/
#include <stdio.h>

void reverse_string(char *string);

int main()
{
    char string[] = "ABCDEFG";
    printf("%s\n",string);
    reverse_string(string);
    printf("%s\n",string);
}

void reverse_string(char *string)
{
    int num = sizeof(string);
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num-i;j++)
        {
            char temp=string[j+1];
            string[j+1] = string[j];
            string[j] = temp;
        }
    }
}