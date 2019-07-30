/*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
** SANIEZ David
*/

#include "my.h"

int my_putnbr(int n)
{
	if (n < 0) {
		my_putchar('-');
		n = -n;
	} else if (n >= 10) {
		my_putnbr(n / 10);
		my_putchar(n % 10 + '0');
	}
	if (n < 10)
		my_putchar(n % 10 + '0');
	return (n);
}
