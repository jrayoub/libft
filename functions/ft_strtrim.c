
#include "../libft.h"

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

	cpy = malloc(ft_strlen(s1));
	if (!cpy)
		return (0);
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
	while (start < end)
	{
		cpy[k++] = s1[start++];
	}
	return (cpy);
}

int	main(void)
{
	char	s[] = "*----*H****e-llo**___________";
	printf("%s", ft_strtrim(s, "*-_"));
}
