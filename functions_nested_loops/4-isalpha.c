/**
 * _isalpha - check the code.
 *
 *
 *@c: Number to pass to _islower function
 *
 * Return: Always 0.
 */
int _isalpha(void)
{
if ((c >= 'a' && c <= 'z') ||
(c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
