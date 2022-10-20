#include <stdio.h>
int main()
{
	int n,i;
	double t;
	t = 0;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		t = t + 1.0/i;
	}
	printf("%.6f", t);
	return 0;
}
