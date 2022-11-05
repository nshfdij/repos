#include <stdio.h>
 long long fact(int a, int b);
 int main()
 {
     int a, b;
     while (scanf_s("%d %d", &a, &b) == 2)
     {

         if (b == -1)

             break;
         printf("%lld", fact(a, b));
     }

     return 0;
 } 
 
 
 long long fact(int a, int b)
{
     int i;
     long long sum = 1;
    for (i = 1; i <= b; i++)
    {
        sum=sum*a;
    }
    return sum;
}
