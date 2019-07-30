/*
** EPITECH PROJECT, 2018
** str_to_int
** File description:
** SANIEZ David
*/

int str_to_int(char *str)
{
	int res = 0;
	int neg = 0;
	int i = 0;

	if (str[0] == '-') {
		neg = 1;
		i = 1;
	}
	while (str[i] != '\0') {
		res = res * 10;
		res = res + (str[i] - '0');
		i++;
	}
	if (neg == 1)
		res = res * -1;
	return (res);
}
