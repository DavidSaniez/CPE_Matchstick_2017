/*
** EPITECH PROJECT, 2018
** my_atoi
** File description:
** By DavidS
*/

int my_atoi(char *str)
{
	int i = 0;
	int nb = 0;

	while (str[i] != '\0') {
		if (str[i] <= '9' && '0' <= str[i]) {
			nb *= 10;
			nb += str[i] - '0';
		}
		else
			return (nb);
		str++;
	}
	return (nb);
}
