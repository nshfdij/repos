#include <stdio.h>
int main()
{
	int n, a,b;
	int mc;
	scanf_s("%d %d", &n,&mc);
	n >= 30 && n <= 573;
	a = mc/ 10;
	b = n * 0.2;
	if (b%10 <= 4) {
		b = b-(b%10);
	}
	else {
		b = b+(10-(b%10));
	}
	if (mc >= 1 && mc <= 10) {
		printf("First Prize");
	}
    else if (mc <= 30&&mc>=11) {
		printf("Second Prize");
	}
    else if (mc>= 31 && mc <= (30 + b)) {
		printf("Third Prize");
	}
	else if(mc>=(31+b)&&mc<=n){
		printf("No Prize");
	}
	else {
		printf("Input Error");
	}

	return 0;
}