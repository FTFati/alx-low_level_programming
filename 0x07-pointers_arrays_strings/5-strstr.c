#include "main.h"
/**
* _strstr - function that locates a substring
* @haystack: string to search
* @needle: substring to find
* Return: pointer to the beginning of the located substring
*/
char *_strstr(char *haystack, char *needle)
{
	char *occurance, *tempNeedle;

	if (!*needle)
		return (haystack);
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			occurance = haystack;
			tempNeedle = needle;
			while (*tempNeedle)
			{
				if (*haystack++ != *tempNeedle++)
				{
					haystack = occurance;
					break;
				}
			}
			if (occurance != haystack)
				return (occurance);
		}
		haystack++;
	}
	return (0);
}
