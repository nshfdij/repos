#include <stdio.h>
int main()
{
    int n = 100;
    int a = 0, b = 0, c = 0, d = 0;//����aΪ��λ��bΪʮλ��cΪ��λ
    for (n; n < 1000; n++)//forѭ��ɸѡ���֣�ֱ��ѡ�����ϵ�ˮ�ɻ���
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

