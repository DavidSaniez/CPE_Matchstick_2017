/*
** EPITECH PROJECT, 2018
** check_win
** File description:
** By DavidS
*/

#include <stdlib.h>
#include "matchstick.h"
#include "my.h"

int check_win(map_t *map, char ia)
{
	int result = 0;

	for (int i = 0; map->map[i] != NULL; i++)
		result += count_char(map->map[i], '|');
	if (result > 0)
		return (84);
	if (ia == 1) {
		print_map(*map);
		my_putstr("I lost... snif... but I'll get you next time!!\n");
	} else {
		print_map(*map);
		my_putstr("You lost, too bad...\n");
	}
	return (0);
}
