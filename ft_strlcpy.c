#include "libft.h"

size_t	ft_strlcpy(char  *dst, const char  *src, size_t size)
{
	int				slen;
	unsigned int	i;

	i = 0;
	if(dst == NULL || src == NULL)
		return 0;
	slen = ft_strlen(src);
	if (!size)
		return (slen);
	while (src[i] && i < size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (slen);
}
