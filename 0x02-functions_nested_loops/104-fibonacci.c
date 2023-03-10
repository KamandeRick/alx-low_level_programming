#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers
 * starting with 1 and 2, followed by a new line
 * Return:  (Success)
 */

int main(void)
{
	unsigned long int i;
	unsigned long int pre = 1;
	unsigned long int post = 2;
	unsigned long int l = 1000000000;
	unsigned long int pre1;
	unsigned long int pre2;
	unsigned long int post1;
	unsigned long int post2;

	printf("%lu", pre);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", post);
		post += pre;
		pre = post - pre;
	}

	pre1 = (pre / l);
	pre2 = (pre % l);
	post1 = (post / l);
	post2 = (post % l);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", post1 + (post2 / l));
		printf("%lu", post2 % l);
		post1 = post1 + pre1;
		pre1 = post1 - pre1;
		post2 = post2 + pre2;
		pre2 = post2 - pre2;
	}
	printf("\n");
	return (0);
}

