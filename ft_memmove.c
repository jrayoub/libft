#include "libft.h"


void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *dstcpy;
	const char *srccpy;
	int i;

	dstcpy = (char *)dest;
	srccpy = (const char *)src;
	if(n == 0)
	{
		return dest;
	}
	if (dest > src)
	{
		i = n - 1;
		while (i >= 0)
		{
			dstcpy[i] = srccpy[i];
			i--;
		}
		return ((void *)dest);
	}
	else
		return (ft_memcpy((void *)dest, src, n));
}
