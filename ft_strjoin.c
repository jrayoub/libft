#include<stdlib.h>

size_t ft_strlen(char *s){
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

char *ft_strjoin(char const *s1, char const *s2){
    size_t len1 = ft_strlen(s1); 
    size_t len2 = ft_strlen(s2);
    char *ns;
    int j;
    int i;

    j = 0;
    i = 0;
    ns = malloc(len1 + len2 + 1);
    if(ns == NULL)
        return NULL;
    while(s1[j])
        ns[i++] = s1[j++];
    j = 0;
    while(s2[j])
        ns[i++] = s1[j++];
    ns[i] = '\0';
    return ns;
}