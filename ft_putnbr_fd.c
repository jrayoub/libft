#include "libft.h"

long int	ft_abs(long int n)
{
	if (n < 0)
		return ((n * -1));
	return (n);
}

void	ft_putnbr_fd(int n, int fd)
{
	long int	nc;
	char		c;

	if (n < 0)
		write(fd, "-", 1);
	nc = ft_abs(n);
	if (nc >= 10)
		ft_putnbr_fd(nc / 10, fd);
	c = '0' + nc % 10;
	write(fd, &c, 1);
}

// int	main(void)
// {
// 	ft_putnbr_fd(INT_MIN, 1);
// 	ft_putnbr_fd(-42, 1);
// }
