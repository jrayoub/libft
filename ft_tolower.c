#include "libft.h"

int	ft_isupper(char c)
{
	return ((c >= 'A' && c <= 'Z') ? 1 : 0);
}
char	ft_tolower(char c)
{
	if (ft_isupper(c) != 0)
		c -= 32;
	return (c);
}
