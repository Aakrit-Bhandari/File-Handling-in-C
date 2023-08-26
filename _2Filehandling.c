#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    int num[10];
    for (int i = 0; i <= 9; i++)
    {
        printf("Enter a Number ");
        scanf("%d", &num[i]);
    }
    fp = fopen("C:/Hackerrank/file.txt", "w");
    for (int i = 0; i <= 9; i++)
    {
        fprintf(fp, "%d\n", num[i]);
    }
    fclose(fp);
}