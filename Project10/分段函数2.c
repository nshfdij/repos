//



//

#include <stdio.h>
#include <math.h>
int main()
{
	int n, i;
	double x, y;
	scanf("%d", &n);
	for (i = 0; i <= n; i++) {
		scanf("%lf\n", &x);
		if (x < 0) {
			y = fabs(x / 2.0);
		}
		else {
			if (x < 10) {
				y = 3 + exp(x);
			}
			else {
				if (x < 20) {
					y = log10(x);
				}
				else {
					if (x < 30) {
						y = pow(x, 1.5);
					}
					else {
						if (x < 50) {
							y = sqrt(x) - 1;
						}
						else {
							y = 3 * cos(x);
						}
					}
				}
			}
			printf("%")
		}
	}
	return 0;
}