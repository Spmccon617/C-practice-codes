#include <stdio.h>

int main()
{
	int age;
	printf("What is your age?");
	fgets(&age, stdin); /* fgets allows you to input multiple items */
	printf("You are %d years old", age);

	double gpa;
	printf("What is your gpa?");
	scanf("%lf", &gpa);
	printf("Your gpa is %f", gpa);

	char grade;
	printf("What is your grade?");
	scanf("%c", &grade);
	printf("Your grade is %c", grade);

	char name[4]; /* number in [] tells how many characters will be in string */
	printf("What is your name?");
	scanf("%s", name); /* Don't need & for string variable */
	printf("Your name is %s", name);

	return 0;
