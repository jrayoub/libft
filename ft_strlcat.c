#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

size_t ft_strlen (const char *s){
    int i;

    i = 0;
    while (s[i])
        i++;
    return i;
}

size_t ft_strlcat(char *dst, const char *src, size_t size){
    int i;
    int j;
    int dstslen = ft_strlen(dst);
    if (dstslen > size)
        return ft_strlen(src) + size;
    i = ft_strlen(dst);
    j = 0;
    while(src[j] && j < size)
        dst[i++] = src[j++];
    dst[i] = '\0';
    return i;
}

// int main(int ac, char **av){
//     if(ac < 1) return 0;
//     char *dest = malloc(30);
//     printf("len : %ld  dst : %s\n -------------------------------\n",ft_strlcat(dest,av[1],30),dest);
 
//     dest = "7878";
//     printf("len : %ld  dst : %s\n -------------------------------\n",ft_strlcat(dest,av[1],30),dest);
    
//     dest = "12345678";
//     printf("len : %ld  dst : %s\n -------------------------------\n",ft_strlcat(dest,av[1],30),dest);

//     dest = "123456789";
//     printf("len : %ld  dst : %s\n -------------------------------\n",ft_strlcat(dest,av[1],30),dest);
//     dest = "123123";
//     printf("len : %ld  dst : %s\n -------------------------------\n",ft_strlcat(dest,av[1],30),dest);

//     dest = "123456789";
//     printf("len : %ld  dst : %s\n -------------------------------\n",ft_strlcat(dest,av[1],30),dest);

//     return 0;
// }