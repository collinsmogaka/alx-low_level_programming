#include <stdio.h>

/**
 * main - prints the size of various typesa based on
 *the computer it is compiled and run on..
 * Return: Always 0.
 */
int main(void)
{
printf("Siza of a char: %zu byte(s)\n", sizeof(char));
printf("Siza of a int: %zu byte(s)\n", sizeof(int));
printf("Siza of a long int: %zu byte(s)\n", sizeof(long int));
printf("Siza of a long long int: %zu byte(s)\n", sizeof(long long int));
printf("Siza of a float: %zu byte(s)\n", sizeof(float));
return (0);
}
