/*
** EPITECH PROJECT, 2017
** my_strlen
** File description:
** my_strlen SANIEZ David
*/

#include "my.h"

int my_strlen(char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		i++;
	}
	return (i);
}
