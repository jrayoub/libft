#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	unsigned char uc = (unsigned char) c;

	i = ft_strlen(s);
	while (i >= 0 && s[i] != uc)
		i--;
	if (s[i] == uc)
		return ((char *)&s[i]);
	return (0);
}

// void ft_print(char *s){
//     int i;
//     i = 0;
//     if(s == 0)
//         write(1,"(null)",6);
//     else
//     {
//         while(s[i])
//             write(1,&s[i++],1);
//     }
// }
// int main(int ac, char **av) {
//     // Write C code here
//     ft_print("\nReturn Is : ");
//     ft_print(ft_strrchr("Hello",av[1][0]));

//     return (0);
// }