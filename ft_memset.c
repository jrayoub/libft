#include<unistd.h>
#include<stdlib.h>

void *ft_memset(void *s, int c, size_t n){
    int i;
    unsigned char *sc = (unsigned char*) s;

    i = 0;
    while(i < n){
        *sc = c;
        sc++;
        i++;
    }
    return s;
}

// int main(int ac, char **av)
// {
//     void *s = malloc(30);
//     char *rs = ft_memset(s,av[1][0],10);

//     for(int i = 0; i <= 10; i++)
//         write(1,&rs[i],1);
    
//     return 0;
// }

