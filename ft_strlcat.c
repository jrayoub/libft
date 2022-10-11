#include "libft.h"


size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dstslen;

	dstslen = ft_strlen(dst);
	if (dstslen > size)
		return (ft_strlen(src) + size);
	i = ft_strlen(dst);
	j = 0;
	while (src[j] && j < size)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (i);
}

// int	main(int ac, char **av)
// {
// 	char	dest[60];

// 	dest[60] = "7878";
// 	printf("len : %ld  dst : %s\n -------------------------------\n",
// 			ft_strlcat(dest, "Hello", 60),
// 			dest);
// 	return (0);
// }
