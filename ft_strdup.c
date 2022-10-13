#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *ptr;
	size_t n;

	n = ft_strlen(s);
	ptr = malloc(n);
	if (ptr == NULL)
		return (NULL);
	if (n == 0)
	{
		*ptr = 0;
		return (ptr);
	}
	return (char *)ft_memcpy(ptr, s, n);
}
