#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Max(int, int, int);

int main()
{
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    printf("%d", Max(A, B, C));
}

int Max(int a, int b, int c)
{
    if (a > b)
    {
        if (a < c) return a;
        if (b > c) return b;
        return c;
    }
    else
    {
        if (b < c) return b;
        if (a > c) return a;
        return c;
    }
}