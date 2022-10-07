#include<unistd.h>


int ft_isdigit(char c)
{
    return ((c >= '0' && c <= '9')?1:0);
}
