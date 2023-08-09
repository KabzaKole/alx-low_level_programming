/**
 * _isupper - checks if letter is uppercase
 *
 * @c:check letter input
 *
 * Return: 1 if it's uppercase, return 0 if not uppercase
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
	return (1);
else
	return (0);
}
