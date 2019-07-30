/*
** EPITECH PROJECT, 2018
** matchstick_map
** File description:
** matchstick_map
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "matchstick.h"

char *fill_line(int nb_line, int size)
{
	char *res = malloc(sizeof(char) * (size * 2));

	for (int i = 0; i < size * 2 - 1; i++) {
		if (i < size - nb_line - 1 || i > size + nb_line - 1)
			res[i] = ' ';
		else
			res[i] = '|';
	}
	res[size * 2 - 1] = '\0';
	return (res);
}

map_t create_map(int size, int matches)
{
	map_t match;

	match.map = malloc(sizeof(char *) * (size + 1));
	if (match.map == NULL)
		return (match);
	for (int i = 0; i < size; i++) {
		match.map[i] = fill_line(i, size);
		if (match.map[i] == NULL) {
			match.map = NULL;
			return (match);
		}
	}
	match.map[size] = NULL;
	match.nb_line = size;
	match.nb_matches = matches;
	return (match);
}
