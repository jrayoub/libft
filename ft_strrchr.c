#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	unsigned char uc = (unsigned char) c;

	i = ft_strlen(s);
	while (i >= 0 && s[i] != uc)
		i--;
	if (s[i] == uc)
		return ((char *)&s[i]);
	return (0);
}
