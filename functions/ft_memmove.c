#include "../libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char			*dstcpy;
	const char		*srccpy;
	unsigned int	i;

	dstcpy = dest;
	srccpy = src;
	while (n--)
		*dstcpy++ = *srccpy++;
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	char				*temp;

	s = src;
	ft_memcpy(temp, src, n);
	return (ft_memcpy(dest, temp, n));
}

// int	main(int ac, char **av)
// {
// 	int m[5] = {0, 1, 2, 3, 4};
// 	ft_memmove(&m[2], &m[0], 12);
// 	for (size_t i = 0; i < 5; i++)
// 	{
// 		printf(" %d ,", m[i]);
// 	}
// 	return (0);
// }
