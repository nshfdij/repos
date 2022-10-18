#include <stdio.h>
int main()
{
	int f,low,up;
	double c;
	scanf_s("%d%d", &low,&up);
	if (low<=up) {
		for (f = low; f <= up; f++) {
			c = (5.0 / 9.0) * (f - 32);
			printf("%4d%6.1f\n", f, c);
		}
	}
	else
		printf("error!");

	return 0;
}