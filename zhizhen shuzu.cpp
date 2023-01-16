/*利用指针数组输出二维数组的某一个元素*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[2][3];
    printf("输入2行3列的数组：\n");
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int(*p)[3] = a;
    printf("%d\n", *(*(p + 1) + 2));
    // for (i = 0; i < 2; i++)
    // {
    //     for (j = 0; j < 3; j++)
    //     {
    //         printf("%-3d", a[i][j]);
    //     }
    //     printf("\n");
    // }
    system("pause");
    return 0;
}