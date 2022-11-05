#include <stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	if ((n % 4 == 0&&n%100!=0)||(n%400==0)){
		printf("Yes");
	}
	else {
		printf("No");
	}

	return 0;
}