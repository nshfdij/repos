#include  <stdio.h>
#include <math.h>
int main()
{
	int n, i, a, t;
	scanf_s("%d\n", &n);
	for (i = 1; i <= n; i++) {
		int x;
		scanf_s("%d", &x);
		if (x == 0 || 1)
			printf("No\n");
		if (x == 2) {
			printf("Yes\n");
		}
		if (x > 2) {
			a = sqrt(x) + 1;
			for (t = 2; t <= a; t++) {
				if (x % t == 0)
					break;
			}
			if (t > a) {
				printf("Yes\n");
			}
			else {
				printf("No\n");
			}
		}
	}
	return 0;
}
