#include <stdio.h>
double getpower(int x, int y);
int main()
{
    int x, y;
    while (scanf_s("%d %d", &x, &y) == 2) {
        if (x == 0)
           
            break; 
        printf("%.6f", getpower(x, y));
     }
    return 0;
}
double getpower(int x, int y)
{
    int i;
    double product = 1.0;
    if (y >= 0) {
        for (i = 1; i <= y; i++) {
            product = product * x;
        }
    }else {
        for (i = 1; i <= -y; i++) {
            product = product /x;
        }
    }
    return product;
}
