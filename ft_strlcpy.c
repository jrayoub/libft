#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	const char *osrc = src;
	size_t l_room = dst_size;
	if(l_room != 0)
	{
		while (--l_room != 0)
			if ((*dst++ = *src++) == '\0')
				break;
	}
	if(l_room == 0){
		if(dst_size != 0)
			*dst = '\0';
		while (*src++)
			;
	}
	return(src - osrc - 1);
}
