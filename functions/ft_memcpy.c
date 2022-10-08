#include "../libft.h"
s
void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	char			*dstcpy;
	const char		*srccpy;
	unsigned int	i;

	dstcpy = dest;
	srccpy = src;
	while (n--)
		*dstcpy++ = *srccpy++;
	return (dest);
}

// int main(int ac, char** av)
// {
//     if(ac > 2){
//     char *dest = ft_memcpy((void *)av[1],(void *)av[2],3);
//     printf("dest is %s",dest);
//     }
//     return (0);
// }
