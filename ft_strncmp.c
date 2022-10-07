#include<unistd.h>

ft_strncmp(char *s1, char *s2,size_t n){
    unsigned int i;

    i = 0;
    while (s1[i] && s2[i] && i < n)
        i++;
    return (s1[i]-s2[i]);
}