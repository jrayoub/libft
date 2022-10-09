#include "../libft.h"
size_t	t_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/**
 * @brief Applies the function ’f’ to each character of the
string ’s’, and passing its index as first argument
to create a new string (with malloc(3)) resulting
from successive applications of ’f’.
 *
 * @param s The string on which to iterate.
 * @param f The function to apply to each character.
 * @return s {char*} The string created from the successive applications of ’f’.
Returns NULL if the allocation fails.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		buff;
	char	*ns;

	buff = t_strlen((char *)s);
	ns = (char *)malloc(sizeof(char) * buff + 1);
	i = 0;
	while (s[i])
	{
		ns[i] = (*f)(i, s[i]);
		i++;
	}
	ns[i] = 0;
	return (ns);
}
// char	shift_by_index(unsigned int index, char c)
// {
// 	return (c + index);
// }
// int	main(void)
// {
// 	char	*ns;

// 	ns = ft_strmapi("123456", &shift_by_index);
// 	printf("%s", ns);
// 	return (0);
// }
