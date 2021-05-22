#include <stdio.h>
#include <math.h>

int main()
{
    float x, c, y;
    int n;
    int N = 4;
    printf("Enter x\n");
    scanf("%f", &x);

    printf("--------------------\n");
    printf("|  x   |  y   |\n");
    printf("--------------------\n");

    y = 0.0;
    c = x;
    for (n = 0; n < N; n++)
    {
        c = pow(-1, n) * pow(x, 2 * n + 1) / (2 * n + 1);
        y = y + c;
    }
    printf("\n| %7.4f   | %7.4f  \n", x, y);
    printf("-----------------\n");

    return 0;
}