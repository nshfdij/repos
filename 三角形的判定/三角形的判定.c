#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c;
	scanf_s("%lf,%lf,%lf", &a, &b, &c);
	if ((a + b > c && a + c > b && b + c > a) && ( fabs(a-b) < c && fabs(b-c)< a && fabs(a-c)<b)) {
		if (a == b == c) {
			printf("Equilateral triangle\n");
		}else if (a == b || a == c || b == c) {
			printf("Isoceles triangle\n");
		}else if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b) {
			printf("Right-angled triangle\n");
		}else {
			printf("General triangle\n");
		}
    }
	else {
		printf("Can't make up of triangle\n");
	}
	return 0;
}
