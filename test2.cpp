#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s1[520], s2[520];
    int a[520], b[520];
    scanf("%s%s", s1, s2);
    int len1 = 0;
    len1 = strlen(s1) > strlen(s2) ? strlen(s1) - strlen(s2) : strlen(s2) - strlen(s1);
    if (strlen(s1) > strlen(s2))
    {
        s2 += '0' * len1;
    }

    int i, j = 0;

    int len = 0;
    len = strlen(s1) > strlen(s2) ? strlen(s1) : strlen(s2);
    for (i = 0; i < len; i++)
    {
        a[i] = s1[i] - '0';
        b[i] = s2[i] - '0';
    }
    for (i = 0; i < len; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
    for (i = 0; i < len; i++)
    {
        printf("%d", b[i]);
    }

    printf("\nlen=%d\n", len);
    system("pause");
    return 0;
}