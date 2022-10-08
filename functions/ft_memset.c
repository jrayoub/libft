#include "../libft.h"


void	*ft_memset(void *s, int c, size_t n)
{
	int				i;
	unsigned char	*sc;

	sc = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		*sc = c;
		sc++;
		i++;
	}
	return (s);
}

// int main(int ac, char **av)
// {
//     // // void *si = malloc(30);
// 	// char s[] = "sdsdsd";
//     // char *rs = ft_memset((void *)s,'H',10);

//     // for(int i = 0; i <= 10; i++)
//     //     write(1,&rs[i],1);

//     // return (0);
// }
int main()
{
return 0;
}
