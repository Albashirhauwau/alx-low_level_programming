#include <stdio.h>

/**
 * main - print lower and uppercase
 *
 * Return: Always return 0 (success)
 *
 */
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for(i = 0; i< 52; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
