#include "libft.h"
void	ft_converter(char *s, long int n, int index)
{
	if (n >= 10)
		ft_converter(s, n / 10, index - 1);
	s[index] = '0' + n % 10;
}
long int	ft_abs(long int v)
{
	return (v < 0 ? v * -1 : v);
}
/**
 * @brief Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.
 *
 * @param n {Int} the integer to convert.
 * @return {Char *} The string representing the integer.
NULL if the allocation fails.
 */
char	*ft_itoa(int n)
{
	long int	nc;
	int			buff;
	char		*str;

	buff = 0;
	nc = ft_abs((long)n);
	while (nc >= 10)
	{
		nc /= 10;
		buff++;
	}
	str = (char *)malloc(sizeof(char) * buff + 1);
	if (!str)
		return (NULL);
	nc = ft_abs((long)n);
	ft_converter(str, nc, buff);
	//str[buff + 1] = 0;
	return (str);
}

// int	main(void)
// {
// 	printf("%s", ft_itoa(-2147483648));
// 	return (0);
// }
