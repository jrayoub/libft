#include "../libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cpy;
	unsigned char	cc;
	unsigned int	i;

	cpy = (unsigned char *)s;
	cc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (cpy[i] == cc)
			return (&s[i]);
		i++;
	}
	return (0);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// int main(int ac, char** av)
// {

//     if(ac > 1)
//     {
//         char *str = ft_memchr((void *) av[1],av[2][0],ft_strlen(av[1]));
//         printf("Result is >> %s", str);
//     }
// }
