/*
** EPITECH PROJECT, 2018
** error
** File description:
** By DavidS
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "matchstick.h"
#include "my.h"

int check_error_line(map_t map, char *str)
{
	if (str == NULL)
		exit (84);
	if (my_str_is_num(str) == 84) {
		my_putstr("Error: invalid input (positive number expected)\n");
		return (84);
	} else if (map.nb_line < my_atoi(str) || my_atoi(str) == 0) {
		my_putstr("Error: this line is out of range\n");
		return (2);
	}
	return (0);
}

int check_error_matches2(map_t map, char *str, int line)
{
	if (str == NULL)
		 exit (84);
	if (my_atoi(str) > count_char(map.map[line - 1], '|')) {
		my_putstr("Error: not enough matches on this line\n");
		return (2);
	} else if (my_atoi(str) == 0) {
		my_putstr("Error: you have to remove at least one match\n");
		return (84);
	} else
		return (0);
}

int check_error_matches(map_t map, char *str, int line)
{
	if (str == NULL)
		exit (84);
	if (my_str_is_num(str) == 84) {
		my_putstr("Error: invalid input (positive number expected\n");
		return (84);
	} else if (map.nb_matches < my_atoi(str)) {
		my_putstr("Error: you cannot remove more than ");
		my_putnbr(map.nb_matches);
		my_putstr(" matches per turn\n");
		return (84);
	} else
		return (check_error_matches2(map, str, line));
}
