#include <stdio.h>
#include "main.h"

/**
* _strlen - Function that returns the lenght of a string
*
* s: this is the  input string
*
* Return: Lenght of the string
*/

int _strlen(char *s)
{
  int i = 0;

  while (s[i] != '\0')
    {
      i++;
    }

  return (i);
}
