/*
** EPITECH PROJECT, 2017
** my_putchar
** File description:
** my_putchar SANIEZ David
*/

#include "my.h"

void my_putchar(char c)
{
	write(1, &c, 1);
}
