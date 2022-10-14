#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int i;
	void *ptr;

	i = 0;
	if (nmemb == SIZE_MAX ||  size == SIZE_MAX)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (!ptr)
		return NULL;
	ft_bzero(ptr, size * nmemb);
	return (ptr);
}
