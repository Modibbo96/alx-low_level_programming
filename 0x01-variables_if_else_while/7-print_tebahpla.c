#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always return 0
 */
int main(void)
{
char low;
low = 'z';
while (low >= 'a')
{
putchar(low);
low--;
}
putchar('\n');
return (0);
}
