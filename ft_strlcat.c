#include "libft.h"




size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	unsigned int i;
	unsigned int j;
	unsigned int dstslen;
	size_t len = ft_strlen(src);

	dstslen = ft_strlen(dst);

	if (dstslen >= size)
		return (ft_strlen(src) + size);
	i = dstslen;
	j = 0;
	while (src[j] && j < (size - dstslen - 1) )
		dst[i++] = src[j++];

	dst[i] = '\0';
	return (dstslen + len);
}

