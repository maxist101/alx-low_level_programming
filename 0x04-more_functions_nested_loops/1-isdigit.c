/**
* _isdigit - determine a digit
* @c: character to determine
* Return: ( 1 0r 0) gives boolean
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
