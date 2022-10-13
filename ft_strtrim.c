
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*cpy;
	int		start;
	int		end;
	int		size;

	i = 0;
	j = 0;
	k = 0;
	while (s1[i] && set[j])
	{
		if (s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	start = i;
	i = ft_strlen(s1) - 1;
	j = 0;
	while (i > 0 && set[j])
	{
		if (s1[i] == set[j])
		{
			i--;
			j = 0;
		}
		else
			j++;
	}
	end = i;
	if (end > start)
		size = end - start;
	else
		size = 0;
	cpy = malloc(size);
	if (!cpy)
		return (0);
	while (start <= end)
	{
		cpy[k++] = s1[start++];
	}
	cpy[k] = '\0';
	return (cpy);
}
