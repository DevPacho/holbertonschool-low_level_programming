#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: string.
 * Return: the length of a string.
 */

int _strlen_recursion(char *s)
{
	if (!s || !*s)
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * isPalindromeRecursion - function to compare and check if a string
 * is palindrome.
 * @s: string to compare.
 * @first: first char of the string.
 * @last: last char of the string.
 * Return: 1 if is palindrome or 0 if not.
 */

int isPalindromeRecursion (char *s, int first, int last)
{
	if (s[first] != s[last])
		return(0);

	if (first >= last)
		return (1);

	return isPalindromeRecursion(s, first + 1, last - 1);

	return (0);
}

/**
* is_palindrome - function that returns 1 if a string is a palindrome and
0 if not.
* @s: string to check.
* Return: 1 if a string is palindrome or 0 if not.
*/

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len == 0)
		return (1);

	return isPalindromeRecursion(s, 0, len - 1);
}
