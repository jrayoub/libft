#include<unistd.h>

int ft_isascii(char c)
{
    return ((c >= 0 && c <= 127)? 1 : 0)
}