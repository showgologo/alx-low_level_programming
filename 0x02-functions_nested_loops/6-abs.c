#include "main.h"
/**
 * _abs - this convert all numbers to postive
 * @absolute: int type number
 * Return: absolute value of a number
 */

int _abs(int absolute)
{
	if (absolute < 0)
	{
		return (absolute * -1);
	}
	else
	{
		return (absolute);
	}
}
