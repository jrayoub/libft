#include "../libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char			*dstcpy;
	const char		*srccpy;
	unsigned int	i;

	dstcpy = dest;
	srccpy = src;
	i = 0;
	while (i < n)
	{
		dstcpy[i] = srccpy[i];
		i++;
	}
	return (dest);
}

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	n;

	n = ft_strlen(s);
	ptr = malloc(n);
	if (ptr == NULL)
		return (NULL);
	return (char *)ft_memcpy(ptr, s, n);
}
