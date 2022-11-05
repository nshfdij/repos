#include <stdio.h>
int main()
{
	char op;
	op = getchar();
	if ((op >= 'a' && op <= 'z')||(op>='A'&&op<='Z')) {
		printf("alphabetic character");
	}
	else if (op >='0' && op <='9') {
		    printf("digital character");
	}
	else{
		printf("other character");
	}
	return 0;

}