/*
** EPITECH PROJECT, 2018
** turn_matchstick.c
** File description:
** By DavidS
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "matchstick.h"

int get_line_nb(map_t *map)
{
	int res;
	char *str;

	do {
		my_putstr("Line: ");
		str = get_next_line(0);
	} while (check_error_line(*map, str) != 0);
	res = my_atoi(str);
	return (res);
}

int get_match_nb(map_t *map, int line)
{
	int res;
	char *str;
	int err = 0;

	do {
		my_putstr("Matches: ");
		str = get_next_line(0);
		err = check_error_matches(*map, str, line);
		if (err == 2)
			line = get_line_nb(map);
	} while (err != 0);
	res = my_atoi(str);
	return (res);
}

int player_turn(map_t *map)
{
	int ret;
	int line = 0;
	int matches = 0;

	my_putstr("\nYour turn:\n");
	line = get_line_nb(map);
	matches = get_match_nb(map, line);
	write(1, "Player removed ", 15);
	my_putnbr(matches);;
	write(1, " match(es) from line ", 21);
	my_putnbr(line);
	write(1, "\n", 1);
	ret = change_map(map, line - 1, matches, 0);
	return (ret);
}

int change_map(map_t *map, int line, int matches, char ia)
{
	int i = 0;
	int j = 0;

	for(; map->map[line][i] == ' '; i++);
	for(; map->map[line][i] == '|'; i++);
	i--;
	for(; j < matches && map->map[line][i - j] != '\0'; j++)
		map->map[line][i - j] = ' ';
	return (check_win(map, ia));
}
