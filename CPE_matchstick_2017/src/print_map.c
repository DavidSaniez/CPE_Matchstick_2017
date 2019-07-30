/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** print the map
*/

#include <unistd.h>
#include <stdlib.h>
#include "matchstick.h"

void print_map(map_t map)
{
	for (int i = 0; i < map.nb_line * 2 + 1; i++)
		write(1, "*", 1);
	write(1, "\n", 1);
	for (int i = 0; map.map[i] != NULL; i++) {
		write(1, "*", 1);
		my_putstr(map.map[i]);
		write(1, "*\n", 2);
	}
	for (int i = 0; i < map.nb_line * 2 + 1; i++)
		write(1, "*", 1);
	write(1, "\n", 1);
}
