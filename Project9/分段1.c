#include <stdio.h>
int main()
{
	int x;
	int y;
	-10 < x < 10;
	scanf_s("%d", &x);
	if (x == 0) {
		y = x - 1;
	}
	else {
		if (x > -10 && x < 0) {
			y = x + 1;
		}
		else {
			y = 2 * x + 1;
		}
	}
	printf("y=%d", y);

	return 0;
}