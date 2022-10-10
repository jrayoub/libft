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

 int	main(int ac, char **av)
 {
	 char s[] = "123456789";
	memmove(&s[5], &s[0], 3);
	printf(" %s ,", s);
	ft_memmove(&s[5], &s[0], 3);
	printf(" %s ,", s);
 	return (0);
 }
