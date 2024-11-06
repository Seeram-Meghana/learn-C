#include <stdio.h>
int main()
{
    int i, n, c, a = 0, b = 1;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        if (i <= 1)
        {
            c = i;
            printf("%d", c);
        }
        else
        {
            c = a + b;
            a = b;
            b = c;

            printf("%d", c);
        }
    return 0;
}