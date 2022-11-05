#include <stdio.h>
int main()
{
	float x;
	int i ;
	for ( i =1; i <=5; i++)
	{
		scanf_s("%f", &x);
		if (x >= 0 &&x <= 100) {
			if (x >=60){
				if (x >= 70) {
					if (x >= 80) {
						if (x >= 90) {
							printf("A");
						}
						else {
							printf("B");
						}
					}
					else {
						printf("C");
					}
				}
				else {
					printf("D");
				}
			}
			else {
				printf("E");
			}
		}
		else {
			printf("Error");
		}
	}
	return 0;
}