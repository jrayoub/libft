#include "libft.h"

size_t	cont_strings(const char *s, char c)
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
			counter++;
		while (s[i] && s[i] != c)
			i++;
		i++;
	}
	printf("str :  %s, Returned Count is %d", s, counter);
	return (counter);
}

size_t	count_litters(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	*part(const char *s, char c)
{
	int		n;
	int		i;
	char	*ptr;

	i = 0;
	n = count_litters(s, c);
	ptr = (char *)malloc(sizeof(char) * (n + 1));
	if (ptr == NULL)
		return (NULL);
	while (i < n)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
void	ft_free(char **rs)
{
	int	i;

	i = 0;
	while (rs[i] != NULL)
	{
		free(rs[i]);
	}
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
	int strings_count;
	int i;
	char **rs;
	char *result;

	strings_count = cont_strings(s, c);
	printf("\n size allocated %d\n", strings_count + 1);
	rs = (char **)malloc((strings_count + 1) * sizeof(char *));
	if (!rs)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			result = part(s, c);
			rs[i] = result;
			if (result == NULL)
			{
				ft_free(rs);
				return (NULL);
			}
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	rs[i] = 0;
	return (rs);
}
