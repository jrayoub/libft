#include "libft.h"

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	char		*dstcpy;
	const char	*srccpy;
	if(dest == NULL || src == NULL)
		return NULL;
	dstcpy = dest;
	srccpy = src;
	while (n--)
		*dstcpy++ = *srccpy++;
	// *dstcpy = 0;
	return (dest);
}
