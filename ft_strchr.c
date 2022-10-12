#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	unsigned char uc = (unsigned char) c;
	printf("\n%c\n", uc);
	i = 0;
	while (s[i] && s[i] != uc)
	{
		i++;
	}
	if (s[i] == uc)
		return ((char *)&s[i]);
	return (0);
}
