/**
 * _isupper - nested loops
 *
 *@c: Number to pass to _isupper
 *
 * Return: 0
 */
int _isupper(int c)
{
if ((c >= 'A' && c <= 'Z') ||
(c >= 'a' && c <= 'z'))
return (1);
else
return (0);
}
