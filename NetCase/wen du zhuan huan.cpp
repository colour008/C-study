#include <stdio.h>
#include <stdlib.h>
int main()
{
    float c, F;
    scanf("%f", &F);
    c = 5.0 * (F - 32) / 9;
    printf("c=%0.2f\n", c);
    system("pause");
    return 0;
}