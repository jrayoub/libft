#include<unistd.h>
#include<stdio.h>
#include<string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n){
    const unsigned char *src1;
    const unsigned char *src2;
    unsigned int i;

    src1 = s1;
    src2 = s2;
    i = 0;
    if (n == 0) return 0;
    while (i < n && src1[i] == src2[i])
        i++;
    return (src1[i] - src2[i]);
}


// int main(int ac, char **av){
//     if (ac > 2){
//         printf(">>%d<<\n",memcmp(av[1],av[2],3));
//         printf(">>%d<<\n",ft_memcmp(av[1],av[2],3));
//     }
// }