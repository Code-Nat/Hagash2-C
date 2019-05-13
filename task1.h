#pragma once
#include <string.h>


//Part 1
int delete_chars(char* str, int place, int number)
{
	int i;
	if (strlen(str) < place + number)
		return strlen(str);
	for (i = place; i < (int)strlen(str); i++)
	{
		str[i] = str[i + number];
		if (str[i] == '\0')
			break;
	}
	return strlen(str);

}

//part 2
int delete_text(char* str1, char* str2)
{
	if (strstr(str1, str2) == NULL)
		return 0;
	while (strstr(str1, str2) != NULL)
	{
		delete_chars(strstr(str1, str2), 0, strlen(str2));
	}
	return 1;
}