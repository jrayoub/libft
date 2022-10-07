#include<unistd.h>

int ft_isprint(char c)
{
    return (c >= 32 && c <= 126 ? 1 : 0);
}