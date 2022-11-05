#include <stdio.h>
int main()
{
    int n, i, s = 0;
    while (scanf_s("%d", &n) != EOF)
    {
        s = 0;
        for (i = 1; i <= n; i++) {
            s = s + i;
        }
            printf("s=%d\n", s);
        
    }
    return 0;
}
