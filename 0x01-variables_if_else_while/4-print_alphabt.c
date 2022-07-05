#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always return 0
 */
int main(void)
{
char low;
low = 'a';
while (low <= 'z')
{
if (low != 'e' && low != 'q')
{
putchar(low);
}
low++;
}
putchar('\n');
return (0);
}
