#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	int				j;
	int				ci;
	int				llen;

	i = 0;
	j = 0;
	llen = ft_strlen(little);
	if (!little[j])
		return ((char *)big);
	while (big[i] && i < len)
	{
		ci = i;
		j = 0;
		while (little[j] && big[ci] == little[j])
		{
			if (j == llen - 1)
				return ((char *)&big[i]);
			ci++;
			j++;
		}
		i++;
	}
	return (0);
}
