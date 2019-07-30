/*
** EPITECH PROJECT, 2018
** count_char
** File description:
** By DavidS
*/

int count_char(char *str, char c)
{
	int i = 0;
	int res = 0;

	while (str[i] != '\0') {
		if (str[i] == c)
			res++;
		i++;
	}
	return (res);
}
