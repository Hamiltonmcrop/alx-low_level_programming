/**
 * _strlen_recursion - return length of a string
 *
 * @s:  the string to return
 *
 * Return: length of sting
*/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
