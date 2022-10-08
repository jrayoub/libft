#include "../libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*cs;
	unsigned int	i;

	cs = s;
	i = 0;
	while (i < n)
	{
		cs[i] = '\0';
		i++;
	}
}

// int main(){
//     void *src = malloc(30);
//     ft_bzero(src,30);
//     char *cpy = (char *) src;
//     for(int i = 0; i <= 10; i++){
//         if(cpy[i] == '\0'){
//            write(1,"0",1);
//         }
//     }
//     return (0);
// }
