#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c : the character to be check
 * Return : 1 (success) or 0 (for anything)
*/

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{return (1);
	}
	return (0);
}
