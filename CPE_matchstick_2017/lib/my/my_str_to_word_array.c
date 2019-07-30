/*
** EPITECH PROJECT, 2018
** SANIEZ David
** File description:
** str to word array
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"

int nb_word(char *s, char separator)
{
	int count = 0;
	int number = 0;

	while (s[count] != '\0') {
		if (s[count] == separator || s[count] == '\0') {
			number++;
		}
		count++;
	}
	number++;
	return (number);
}

int length(char * s, int nb, char separator)
{
	int count = 0;
	int length = 0;
	int number = 1;

	while (number != nb) {
		if (s[count] == separator || s[count] == '\0')
			number++;
		count++;
	}
	while (s[count + length] != separator && s[count + length] != '\0'){
		length++;
	}
	return (length);
}

char **my_str_to_word_array(char *s, char separator)
{
	int line = nb_word(s, separator);
	int nb_line = 0;
	int c = 0;
	int count;
	int i = 1;
	char **darray = malloc(sizeof(char *) * (line + 1));

	for (int lyne = 0; i < line + 1; i++, lyne++)
		darray[lyne] = malloc(sizeof(char) * (length(s,
		i, separator) + 1));
	for (nb_line = 0; nb_line < line && s[c] != '\0'; nb_line++) {
		for (count = 0; s[c] != separator && s[c] != '\0'; c++, count++)
			darray[nb_line][count] = s[c];
		darray[nb_line][count] = '\0';
		c++;
	}
	darray[line] = NULL;
	return (darray);
}

int main()
{
	char *str = "nufenfe,   fenoifeinzof      fhezoifjezf";
	my_str_to_word_array(str, ' ');
	printf("%c\n", str[1]);
}
