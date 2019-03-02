#include <stdio.h>

int main()
{
	printf("hello\n"); /* \n tells computer to move to next line */
	printf("%d", 17); /* %d tells computer you want to print a number */
	printf("My favorite number is %d", 17); /* in this case acts as placeholder */
	printf("My favorite %s is %d", "number", 17); /* %s tells computer you want to add a string, placeholder */
	printf("My favorite decimal is %f", 69.420); /* %f tells computer you want to add a decimal, placeholder */

	return 0;
}