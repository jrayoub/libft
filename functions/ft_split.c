#include "../libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char			*dstcpy;
	const char		*srccpy;
	unsigned int	i;

	dstcpy = dest;
	srccpy = src;
	i = 0;
	while (i < n)
	{
		dstcpy[i] = srccpy[i];
		i++;
	}
	return (dest);
}

/**
	* @param {String} cs:  The string to be split
	* @param {Char} c:  The delimiter character.
 	* @returns  The number of stings available
 	* @brief counts how many string will be after the split
 */
size_t	cont_strings(const char *s, char c)
{
	int	i;
	int	counter;

	counter = 1;
	while (s[i])
		if (s[i++] == c)
			counter++;
	return (counter);
}
size_t	count_litters(const char *s, char c)
{
	int	i;

	while (s[i] && s[i] != c)
		i++;
	return (i);
}
/**
	* @param {String} cs:  The string to be split
	* @param {Char} c:  The delimiter character.
 	* @returns  The array of new strings resulting from
					the split. NULL if the allocation fails.
 	* @brief Allocates (with malloc(3)) and returns an array
				of strings obtained by splitting ’s’ using the
				character ’c’ as a delimiter.  The array must end
				with a NULL pointer.
 */
char	**ft_split(char const *s, char c)
{
	int		strings_count;
	int		i;
	char	**rs;
	char	*ptr;
	size_t	n;

	strings_count = cont_strings(s, c);
	rs = (char **)malloc(strings_count * sizeof(char *));
	if (!rs)
		return (NULL);
	i = 0;
	while (s[i])
	{
		n = count_litters(&s[i], c);
		ptr = malloc(n);
		if (ptr == NULL)
			return (NULL);
		*rs++ = (char *)ft_memcpy(ptr, &s[i], n);
		i += n - 1;
	}
	*rs = 0;
	return (rs);
}
int	main(void)
{
	char	**rs;

	rs = ft_split("one,tow,three,four,five", ',');
	for (size_t i = 0; rs[i] != 0; i++)
	{
		printf("<%s>\n", rs[i]);
	}
}
