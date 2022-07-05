#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - No entry point
 *
 * Return: Always 0 (Success!)
 */
int main(void)
{
int i;
int j;
for (i = 0; i <= 99; j++)
{
for (i = j; i <= 99; i++)
{
putchar(i / 10 + 48);
putchar(i % 10 + 48);
putchar(' ');
putchar(j / 10 + 48);
putchar(j / 10 + 48);
if (j * 100 + i != 9899)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
