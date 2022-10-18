#include <stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	if (n >= 0 && n <= 59) {
		printf("Sorry");
	}
	else {
		if (n >= 60 && n <= 100) {
			printf("Pass");
		}
	}
	
	return 0;
}