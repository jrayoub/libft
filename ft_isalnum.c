#include<unistd.h>

int ft_isdigit(char c)
{
    return ((c >= '0' && c <= '9'));
}

int ft_isalpha(char c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ? 1 : 0);
}

int ft_isalnum(char c)
{
    return (ft_isalpha(c) || ft_isdigit(c));
}