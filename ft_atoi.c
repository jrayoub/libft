#include<unistd.h>
#include<stdio.h>

int ft_isnumber(char c){
    return (c >= '0' && c <= '9')?1:0;
}

int ft_atoi(const char *nptr){
    int i;
    int nmbr;
    int sign;

    i = 0;
    nmbr = 0;
    sign = 1;
    if (nptr[i] == '-' || nptr[i] == '+'){
        if (nptr[i++] == '-')
            sign *= -1;
    }
    
    while (ft_isnumber(nptr[i])){
        nmbr *= 10;
        nmbr +=  nptr[i++] - '0';
    }
    return (sign * nmbr);
}

int main(int ac, char **av){
    int nmbr = ft_atoi(av[1]);
    printf("value >> %d",nmbr);
    return 0;
}