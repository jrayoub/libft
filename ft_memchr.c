#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cpy;
	unsigned char	cc;
	unsigned int	i;

	cpy = (unsigned char *)s;
	cc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (cpy[i] == cc)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}
