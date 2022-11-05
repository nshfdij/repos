#include <stdio.h>
#include  <math.h>
int main()
{
	int m, n,i,s=0;
	scanf_s("%d %d", &m, &n);
	for (i = m; i <= n && i >= m; i++) {
		s = s + fabs(i % 10);
	}
	printf("%d", s);
	return 0;
}