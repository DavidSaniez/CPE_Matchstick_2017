/*
** EPITECH PROJECT, 2017
** my_swap
** File description:
** my_swap SANIEZ David
*/

#include "my.h"

int my_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
	return (0);
}
