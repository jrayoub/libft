#include "../libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t size)
{
	int				slen;
	unsigned int	i;
	int				j;

	i = 0;
	slen = ft_strlen(src);
	if (!size)
		return (slen);
	while (src[i] && i < size)
	{
		dst[i] = src[i];
	}
	dst[i] = '\0';
	return (slen);
}
