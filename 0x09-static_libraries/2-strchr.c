#include "main.h"
#define NULL 0

/**
  * _strchr - locates a character in a string
  * @c: target and also the occurrence of charace
  * @s: string to search/in the string
  * Return: character in a string
  */

char *_strchr(char *s, char c)
{
int number = 0;
while (s[number] != '\0' && s[number] != c)
number++;
if (s[number] == c)
return (&s[number]);
else
return (NULL);
}
