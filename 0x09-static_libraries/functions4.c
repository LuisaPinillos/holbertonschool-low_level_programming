#include "main.h"

/**
 * *_memcpy - Copies count bytes from the object
 * pointed to by src to the object pointed to by dest
 *@dest: Pointer to the memory location to copy to
 *@src: pointer to the memory location to copy from
 *@n: number of bytes to copy
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	(void)*dest;
	(void)*src;
	(void)n;
}

/**
 * *_strchr - Returns a pointer to the first
 * occurrence of character in the C string str.
 *@s: string
 *@c: Character to be located.
 * Return: dest.
 */
char *_strchr(char *s, char c)
{
	(void)s;
	(void)c;
}

/**
 * _strspn - Returns the length of the initial portion of str1
 * which consists only of characters that are part of str2.
 *@s: String to be scanned
 *@accept: String containing the characters to match.
 * Return: The length of the initial portion of str1
 * containing only characters that appear in str2.
 */
unsigned int _strspn(char *s, char *accept)
{
	(void)s;
	(void)*accept;
}

/**
 * _strpbrk - Returns a pointer to the first occurrence in
 * str1 of any of the characters that are part of str2.
 *@s: String to be scanned.
 *@accept: String containing the characters to match.
 * Return: TReturns a pointer to the first occurrence.
 */
char *_strpbrk(char *s, char *accept)
{
	(void)*s;
	(void)*accept;
}

/**
 * _strstr - Returns a pointer to the first occurrence of str2
 * in str1, or a null pointer if str2 is not part of str1.
 *@haystack: string to be scanned.
 *@needle: String containing the sequence of characters to match.
 * Return: Returns a pointer to the first occurrence
 */
char *_strstr(char *haystack, char *needle)
{
	(void)*haystack;
	(void)*needle;
}
