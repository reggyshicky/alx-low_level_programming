#include "main.h"
#include <string.h>
/**
 * _strstr - function that locates a substring.
 * @haystack: string to be scanned
 * @needle: substring
 * Return: p, a pointer to return
 */
char *_strstr(char *haystack, char *needle)
{
	char *p;

	p = strstr(haystack, needle);
	return (p);
}
