#include "libft.h"

int	ft_isnumber(char c)
{
	return ((c >= '0' && c <= '9') ? 1 : 0);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	nmbr;
	int	sign;

	i = 0;
	nmbr = 0;
	sign = 1;
	while (nptr[i] && nptr[i] >= 9 && nptr[i] <= 13)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i++] == '-')
			sign *= -1;
	}
	while (ft_isnumber(nptr[i]))
	{
		nmbr *= 10;
		nmbr += nptr[i++] - '0';
		if(nmbr > LLONG_MAX){
			if(sign < 0)
				return -1;
			else
				return 1;
		}
	}
	return (sign * nmbr);
}

// int	main(int ac, char **av)
// {
// 	int	nmbr;

// 	nmbr = ft_atoi(av[1]);
// 	printf("value >> %d", nmbr);
// 	return (0);
// }
