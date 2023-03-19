
Search or jump to…
Pull requests
Issues
Codespaces
Marketplace
Explore
 
@diboradiborah 
Dani-1138
/
alx-low_level_programming
Public
Fork your own copy of Dani-1138/alx-low_level_programming
Code
Issues
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x08-recursion/6-is_prime_number.c
@Dani-1138
Dani-1138 is prime number
Latest commit 76e0346 on Jan 4
 History
 1 contributor
Executable File  39 lines (33 sloc)  756 Bytes

#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - Checks if a number is divisible.
 * @num: The number to be checked.
 * @div: The divisor.
 * Return: If the number is divisible - 0.
 *         If the number is not divisible - 1.
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);
	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 * Return: If the integer is not prime - 0.
 *         If the number is prime - 1.
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (is_divisible(n, div));
}
