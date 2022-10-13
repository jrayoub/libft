#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;
	size_t	size;

	i = 0;
	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (len > size)
		len = size;
	substring = malloc(sizeof(char) * len + 1);
	if (!substring)
		return (NULL);
	if (len >= start)
	{
		while (i < len)
		{
			substring[i++] = s[start++];
		}
	}
	substring[i] = '\0';
	return (substring);
}
