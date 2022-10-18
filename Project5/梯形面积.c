#include <stdio.h>
int main()
{
	int x1, x2, x3, x4, y1, y2, area;
	scanf_s("%d %d %d %d %d %d",&x1,&x2,&x3,&x4,&y1,&y2);
	area = ((x2 - x1) + (x4 - x3))*(y1 - y2) / 2;
	printf("%d", area);
	
	return 0;
}