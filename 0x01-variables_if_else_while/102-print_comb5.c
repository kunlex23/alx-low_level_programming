#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
(
int n, m, d1, d2, d3, d4;
for (n = 0; n <= 98; n++)
{
for (m = n + 1; m <= 99; m++)
{
di = n / 10;
d2 = n % 10;
putchar(d1 + '0');
putchar(d2 + '0');
putchar(' ');
d3 = m / 10;
d4 = m % 10;
putchar(d3 + '0');
putchar(d4 + '0');
if (n != 98 || m != 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
