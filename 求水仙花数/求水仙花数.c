#include <stdio.h>
int main()
{
    int n = 100;
    int a = 0, b = 0, c = 0, d = 0;//其中a为百位，b为十位，c为个位
    for (n; n < 1000; n++)//for循环筛选数字，直至选出符合的水仙花数
    {
        a = n / 100;
        b = n / 10 % 10;
        c = n % 10;
        if (n == a * a * a + b * b * b + c * c * c)
        {
            printf("%d\n", n);
        }

    }
    return 0;
}

