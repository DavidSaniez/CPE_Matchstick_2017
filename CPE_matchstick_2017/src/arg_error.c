/*
** EPITECH PROJECT, 2018
** arg_error
** File description:
** By DavidS
*/

#include <stdio.h>
#include "../include/matchstick.h"

int arg_error(char **av)
{
	if (my_str_is_num(av[1]) == 0 && my_str_is_num(av[2]) == 0) {
		if (my_atoi(av[1]) > 1 && my_atoi(av[1]) < 100 &&
		my_atoi(av[2]) > 0)
			return (0);
		else
			return (84);
	}
	return (0);
}
