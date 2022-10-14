#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*cs;
	unsigned int	i;

	cs = s;
	i = 0;
	while (i < n)
	{
		cs[i] = '\0';
		i++;
	}
}
