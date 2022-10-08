#include "../libft.h"

void	ft_print(char *s)
{
	int	i;

	i = 0;
	if (s == 0)
		write(1, "(null)", 6);
	else
	{
		while (s[i])
			write(1, &s[i++], 1);
	}
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	if (s[i] == c)
		return (&s[i]);
	return (0);
}

int	main(int ac, char **av)
{
	// Write C code here
	ft_print("\nReturn Is : ");
	ft_print(ft_strchr("Hello", av[1][0]));
	return (0);
}
