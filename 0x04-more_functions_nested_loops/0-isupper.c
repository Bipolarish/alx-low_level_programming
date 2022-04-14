#include "main.h"

/**
  * _isupper - evaluation if letter is uppercase.
  * @c: prints int
  * Return: Always 0.
  */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
