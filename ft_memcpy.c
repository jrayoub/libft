#include<unistd.h>
#include<stdio.h>

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

// int main(int ac, char** av)
// {
//     if(ac > 2){
//     char *dest = ft_memcpy((void *)av[1],(void *)av[2],3);
//     printf("dest is %s",dest);
//     }
//     return 0;
// }