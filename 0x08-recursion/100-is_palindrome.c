#include <string.h>

/**
 * check_palindrome - checks palindrome
 * @s: string
 * @start: starting index
 * @end: ending index
 *
 * Return: int
 */
int check_palindrome(char *s, int start, int end)
{
	if (*(s + start) != *(s + end))
		return (0);
	if (start > end)
		return (1);
	return (check_palindrome(s, start + 1, end - 1));
}
/**
 * is_palindrome - checks palindrome
 * @s: string
 *
 * Return: int
 */
int is_palindrome(char *s)
{
	return (check_palindrome(s, 0, (int) strlen(s) - 1));
}
