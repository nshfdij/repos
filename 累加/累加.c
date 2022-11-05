#include <stdio.h>
int main()
{
	int n, i, s=0;
	scanf_s("%d", &n);
	n <= 10000 && n >= 1;
	for (i = 1; i <= n; i++) {
		s = s + i;
	}
	printf("%d", s);
	
	return 0;
}