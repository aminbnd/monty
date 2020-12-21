#include "monty.h"

/**
* satoi - atoi on stroids
* @data: data
* Return: int
**/
int satoi(char *data)
{
	int num = atoi(data);
	int cmp = strcmp(data, "0");
	int i = 0;

	if (data[i] == 45)
	{
		cmp = strcmp(data, "-0");
		i++;
	}
	while (data[i] != '\0')
	{
		if (data[i] < 48 || data[i] > 57)
		{
			serror();
		}
		i++;
	}
	if (num == 0 && cmp != 0)
	{
		serror();
	}
	return (num);
}
