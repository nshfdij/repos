#include <stdio.h>
int main()
{
	char a;
	double m, n;
	scanf_s("%lf%c%lf", &m,  &a,   &n);
	switch (a) {
		case'+':printf("%1f\n", m + n); break;
		case'-':printf("%1f\n", m - n); break;
		case'*':printf("%1f\n", m * n); break;
		case'/':printf("%1f\n", m / n); break;
		default:
			printf("error");
			break;
	}
	return 0;
}