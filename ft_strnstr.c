#include<unistd.h>
#include <string.h>
#include<stdlib.h>
#include<stdio.h>

int ft_strlen(char *s){
    int i;

    i = 0;
    while(s[i])
        i++;
    return i;
}


char *ft_strnstr( char *big,  char *little, size_t len){
    int i,j,ci,llen;

    i = 0;
    j = 0;
    llen = ft_strlen(little);
    if (!little[j])
        return (big);
    while (big[i] && i < len){
        ci = i;
        j = 0;
        while (little[j] && big[ci] == little[j]){
            if (j == llen - 1)
                return (&big[i]);
            ci++;
            j++;
        }
        i++;
    }
    return (0);
}

int main(int ac, char **av){
    if(ac > 3){
        int len = atoi(av[3]);
        char *s = ft_strnstr(av[1],av[2],len);
        printf("<<%s>>",s);
    }
    return 0;
}