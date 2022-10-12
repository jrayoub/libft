#include "libft.h"

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	char		*dstcpy;
	const char	*srccpy;

	dstcpy = dest;
	srccpy = src;
	while (n--)
		*dstcpy++ = *srccpy++;
	return (dest);
}

// void	*ft_memmove(void *dest, const void *src, size_t n)
// {
// 	const void	*s;
// 	char		*temp;

// 	temp = (char *) dest;
// 	s = src;
// 	ft_memcpy(temp, s, n);

// }

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dstcpy;
	const char	*srccpy;
	int			i;

	dstcpy = (char *)dest;
	srccpy = (const char *)src;
	if (dest > src)
	{
		i = n - 1;
		while (i >= 0)
		{
			dstcpy[i] = srccpy[i];
			i--;
		}
		return ((void *)dest);
	}
	else
		return (ft_memcpy((void *)dest, src, n));
}

// int main(){
// 	char s[] = {65, 66, 67, 68, 69, 0, 45};
// 	char s0[] = { 0,  0,  0,  0,  0,  0, 0};
// 	char sCpy[] = {65, 66, 67, 68, 69, 0, 45};
// 	char sResult[] = {67, 68, 67, 68, 69, 0, 45};
// 	char sResult2[] = {67, 67, 68, 68, 69, 0, 45};
// 	char *res = (char *)ft_memmove(s0, s, 7);
// 	printf("%s", res);
// }
