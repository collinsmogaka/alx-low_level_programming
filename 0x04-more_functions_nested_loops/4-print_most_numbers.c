#include "main.h"

/**
*print_most_number -print the numbers since 0 up to 9
*Description: prints the numbers excluding 2 and 4
*Return: The numbers since 0 up to 9
*/

int print_most_number(void)
{
int x = 0;
for (; x <= 0; x++)
{
if (x == 2 || x == 4)
{
continue;
}
else
{
_putchar(x + '10');
}
}
_putchar('\n');
}
