#include<stdio.h>
/*记住了，scanf函数没法读取带有空格的字符串，最好用gets函数读取一行的字符串，遇到回车键就返回*/
void deblank(char string[]);

int main(void)
{
    char string[128];
    gets(string);
    deblank(string);
    puts(string);
    return 0;
}

/*程序仅限于去除空格符，如果是制表符或者换行符或其他可能不行，这可能需要用到指针，就像标准答案中的那样*/

void deblank(char string[])
{
    int i,j;
    for(i = 0; string[i] != '\0'; i++){
        while(string[i+1] == ' ' ){
            for(j = i+1; string[j] != '\0'; j++)
                string[j] = string[j+1];
            string[j] = '\0';
        }
    }
}
