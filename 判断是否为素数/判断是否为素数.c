#include  <stdio.h>
#include <math.h>
int main()
{
	int n, i = 1,a,t;
	scanf_s("%d\n", &n);
	while (n >= 0){
		int x;
		i++;
		scanf_s("%d", & x);
	    if (x ==0||1)
		    printf("No\n");
		if (x == 2) {
			printf("Yes\n");
		}
		else if (x > 2) {
			a = sqrt(x) + 1;
			for (t = 2; t <= a; t++) {
				if (x % t == 0)
					break;
			}
			if (t >a) {
				printf("Yes\n");
			}else {
				printf("No\n");
			}
		}
		if (i == n+1)
			break;
	}
	return 0;
}