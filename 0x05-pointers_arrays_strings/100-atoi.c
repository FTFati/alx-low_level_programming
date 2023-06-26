#include "main.h"
/**
* _atoi - function that convert a string to an integer
* @s : the pointer convert
* Return : value
*/
int _atoi(char *s)
{
	int a = 0;
	unsigned int b = 0;
	int m = 1;
	int n = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			m *= -1;
		}
		while (s[a] >= 48 && s[a] <= 57)
		{
			n = 1;
			b = (b * 10) + (s[a] - '0');
			a++;
		}
		if (n == 1)
		{
			break;
		}
		a++;
	}
	b *= m;
	return (b);
}
