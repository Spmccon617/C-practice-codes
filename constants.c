#include <stdio.h>

int main()
{
	/* const variables cannot be changed, will print error. keep variable name in all caps (regular syntax) */
	const int NUM = 5;
	printf("%d\n", num);
	num = 8;
	printf("%d", num);

	return 0;
}
