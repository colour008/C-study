#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, k, l = 0;
    printf("此程序用于计算将10元钱兑换成5元、2元和1元的所有方法：\n");
    for (i = 0; i <= 10; i++)
    {
        for (j = 0; j <= 5; j++)
        {

            for (k = 0; k <= 2; k++)
            {

                if (i * 1 + j * 2 + k * 5 == 10)
                {
                    l++;
                    printf("方法%2d：[1元%2d 张，2元%2d 张，5元%2d 张]\n", l, i, j, k);
                }
            }
        }
    }

    system("pause");
    return 0;
}
