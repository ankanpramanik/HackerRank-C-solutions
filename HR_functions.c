#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void max_func(int a, int b, int c, int d);

int main()
{
    int a, b, c, d;
    printf("");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    max_func(a, b, c, d);
    return 0;
}

void max_func(int a, int b, int c, int d)
{

    {
        if ((a > b) && (a > c) && (a > d))
        {
            printf("%d", a);
        }
        else
        {
            if ((b > c) && (b > d))
            {
                printf("%d", b);
            }
            else
            {
                if (c > d)
                {
                    printf("%d", c);
                }
                else
                {
                    printf("%d", d);
                }
            }
        }
    }
}