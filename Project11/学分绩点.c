#include <stdio.h>
int main()
{
	double a, d;
	int b;
	scanf_s("%lf  %d",&a,&b);
	if (b >= 90 && b <= 100) {
		d=a*4.0;
	}
	else {
		if (b >= 85 && b <= 89) {
			d=a*3.7;
		}
		else {
			if (b >= 82 && b <= 84) {
			    d=a*3.3;
			}
			else {
				if (b >= 78 && b <= 81) {
					d=a*3.0;
				}
				else {
					if (b >= 75 && b <= 77) {
						d=a*2.7;
					}
					else {
						if (b >= 71 && b <= 74) {
							d=a*2.3;
						}
						else {
							if (b >= 66 && b <= 70) {
								d=a*2.0;
							}
							else {
								if (b >= 62 && b <= 65) {
									d=a*1.5;
								}
								else {
									if (b >= 60 && b <= 61) {
										d=a*1.0;
									}
									else {
										if (b >= 0 && b <= 59) {
											d=a*0;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	printf("%1f", d);

	return 0;
}

