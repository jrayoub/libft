#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const void	*s;
	char		*temp;

	temp = NULL;
	s = src;
	ft_memcpy(temp, s, n);
	return (ft_memcpy(dest, temp, n));
}
