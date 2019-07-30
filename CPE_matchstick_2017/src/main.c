/*
** EPITECH PROJECT, 2018
** SANIEZ David
** File description:
** Main function
*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "matchstick.h"

int matchstick(int ac, char **av)
{
	map_t map = create_map(my_atoi(av[1]), my_atoi(av[2]));

	(void)ac;
	if (map.map == NULL)
		return (84);
	print_map(map);
	while (av[1] != NULL) {
		if (player_turn(&map) == 0)
			return 1;
		print_map(map);
		if (ia_turn(&map) == 0)
			return 2;
		print_map(map);
	}
	return (0);
}

int main(int ac, char **av)
{
	time_t raw_time;
	
	(void)ac;
	time(&raw_time);
	srand((unsigned int) raw_time);
	if (ac == 3 && arg_error(av) != 84)
		return(matchstick(ac, av));
	return (84);
}

