#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, k, l = 0;

    printf("100匹马驮100担货的问题：\n");
    
    for (i = 0; i <= 33; i++)
    {
        for (j = 0; j <= 50; j++)
        {

            for (k = 0; k <= 100; k++)
            {

                if (i * 3 + j * 2 + k * 0.5 == 100 && i + j + k == 100 && k % 2 == 0)
                {
                    l++;
                    printf("方法%d：[大马%2d 匹，中马%2d 匹，小马%2d 匹]\n", l, i, j, k);
                }
            }
        }
    }

    system("pause");

    return 0;
}