#include <stdio.h>
int main()
{
	int a;
	scanf_s("%d", &a);
	if (a >= 90 && a <= 100) {
		printf("A\n");
	}
	else {
		if (a >= 80 && a <= 89) {
			printf("B\n");
		}
		else {
			if (a >= 70 && a <= 79) {
				printf("C\n");
			}
			else {
				if (a >= 60 && a <= 69) {
					printf("D\n");
				}
				else {
					if (a >= 0 && a <= 59) {
						printf("E\n");
					}
					else {
						printf("Score is error!");
					}
				}
			}
		}
	}

	return 0;
}