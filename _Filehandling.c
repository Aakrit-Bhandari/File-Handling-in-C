#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("C:/Hackerrank/pattern.c", "r");
    while (1)
    {
        ch = fgetc(fp);
        if (ch == EOF)
        {
            break;
        }
        printf("%c", ch);
    }
    fclose(fp);
    return 0;
}