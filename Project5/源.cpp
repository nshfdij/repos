#include <stdio.h>
int main()
{
	int a, b, c, d;
	scanf_s("%d %d %d", &a, &b, &c);
	d = a * 0.1 + b * 0.2 + c * 0.7;
	if ((0 <= a && 0 <= b && 0 <= c) && (100 >= a && 100 >= b && 100 >= c)) {
		if (60 <= d) {
			printf("Congratulations! You passed the exam!");
		}
		else {
			printf("Sorry! You failed the exam!");
		}
	}
	else {
		printf("Input Error!");
	}

	return 0;
}