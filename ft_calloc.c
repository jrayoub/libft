#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*cs;
	unsigned int	i;

	cs = s;
	i = 0;
	while (i < n)
	{
		cs[i] = '\0';
		i++;
	}
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	int i;
	void *ptr;

	i = 0;
	if (size == 0 || nmemb == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr)
		ft_bzero(ptr, size * nmemb);
	return (ptr);
}
