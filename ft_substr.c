#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	int		i;

	i = 0;
	substring = malloc(len);
	if (substring)
		return (NULL);
	while (s[start] && start < len)
	{
		substring[i++] = s[start++];
	}
	if (start >= len)
		substring[i] = '\0';
	return (substring);
}
