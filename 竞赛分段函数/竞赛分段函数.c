//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int n,i;
//	double x,y;
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++) {
//		scanf_s("%lf", &x);
//		if (0 > x) {
//			y = fabs(x) / 2;
//		}
//		else if (0 <= x && 10 > x) {
//			y = 3 + exp(x);
//		}
//		else if (10 <= x && 20 > x) {
//			y = log10(x);
//		}
//		else if (20 <= x && 30 > x) {
//			y = pow(x, 1.5);
//		}
//		else if (30 <= x && 50 > x) {
//			y = sqrt(x) - 1;
//		}
//		else {
//			y = 3 * cos(x);
//		}
//		printf("y=%1f", y);
//
//	}
//	return 0;
//}

#include<stdio.h>
#include<math.h>
int main() 
{
    int n,i;
    double x,y;
    scanf_s("%d", &n);
    for (i = 1; i <=n; i++)
    {
        scanf_s("%lf", &x);
         if (x < 0)y = x * (-1) / 2;
        else if (x >= 0 && x < 10)
             y = 3 + exp(x);
        else if (x >= 10 && x < 20) 
             y = log10(x);
        else if (x >= 20 && x < 30)
             y = pow(x, 1.5);
        else if (x >= 30 && x < 50)
             y = sqrt(x) - 1;
        else if (x >= 50)
             y = cos(x) * 3;

        printf("y=%lf\n", y);
    }
    return 0;
}