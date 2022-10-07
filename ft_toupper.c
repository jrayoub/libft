#include<unistd.h>

int ft_islower(char c)
{
    return (c >= 'a' && c <= 'z' ? 1 : 0);
}

char ft_toupper(char c)
{
    if(ft_islower(c) != 0)
        c += 32;
    return c;
}