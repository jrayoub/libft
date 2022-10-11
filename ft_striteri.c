#include "libc.h"

/**
 * @brief Applies the function ’f’ to each character of the
string ’s’, and passing its index as first argument
to create a new string (with malloc(3)) resulting
from successive applications of ’f’.
 * @param s The string on which to iterate.
 * @param f The function to apply to each character.
 * @return None
 */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// void	shift_by_index(unsigned int index, char *c)
// {
// 	*c = (*c + index);
// }
// int	main(void)
// {
// 	char ns[20] = "12345";
// 	ft_striteri(ns, &shift_by_index);
// 	printf("%s", ns);
// 	return (0);
// }
