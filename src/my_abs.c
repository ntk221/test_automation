#include "../include/my_abs.h"

int my_abs(int x)
{
	if (INT_MIN == x)
		return (-1);
	if (x < 0)
		return (-x);
	else
		return (x);
}
