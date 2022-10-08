#include "../libft.h"

int	isupper(char c)
{
	return ((c >= 'A' && c <= 'Z') ? 1 : 0);
}
char	ft_tolower(char c)
{
	if (isupper(c) != 0)
		c -= 32;
	return (c);
}
