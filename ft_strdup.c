#include<stdlib.h>

size_t ft_strlen(char *s){
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

void *ft_memcpy(void *dest, const void *src, size_t n){
    char *dstcpy = dest;
    const char *srccpy = src;
    unsigned int i;

    i = 0; 
    while(i < n)
    {
        dstcpy[i] = srccpy[i];
        i++;
    }
    return dest;
}

char *ft_strdup(const char *s){
    char *ptr;
    size_t n;

    n = ft_strlen(s);
    ptr = malloc(n);
    if(ptr ==  NULL)
        return (NULL);
    return (char *) ft_memcpy(ptr,s,n);
}