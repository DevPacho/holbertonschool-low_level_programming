#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;

for (a = 97; a <= 122; a++)
{
	if (a != 101 && a != 113)
		putchar(a);
}
printf("\n");
return (0);
}
