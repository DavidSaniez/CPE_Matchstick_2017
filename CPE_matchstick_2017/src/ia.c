/*
** EPITECH PROJECT, 2018
** Matchstick
** File description:
** By DavidS
*/

#include <unistd.h>
#include <stdlib.h>
#include "matchstick.h"

int good_line(int line, char **map)
{
	if (count_char(map[line], '|') > 0)
		return (0);
	else
		return (84);
}

int ia_turn(map_t *map)
{
	int line = 0;
	int tmp;
	int matches = 1;

	do {
		line = 1 + (rand() % (map->nb_line));
	} while (good_line(line - 1, map->map) != 0);
	tmp = count_char(map->map[line - 1], '|');
	tmp = (tmp >= map->nb_matches) ? map-> nb_matches : tmp;
	matches += rand() % tmp;
	my_putstr("\nAI's turn...\n");
	my_putstr("AI removed ");
	my_putnbr(matches);
	my_putstr(" match(es) from line ");
	my_putnbr(line);
	write(1, "\n", 1);
	return (change_map(map, line - 1, matches, 1));
}
