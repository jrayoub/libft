#include "../libft.h"

size_t	ft_strlen(const char *c)
{
    int    i;
    
    if(!c && c == NULL)
        return 0;
	i = 0;
	while (c[i])
		i++;
	return (i);
}

int main(){
	return 0;
}
