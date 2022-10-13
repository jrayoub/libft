#include"../libft.h"

void ft_lstadd_back(t_list **lst, t_list *new){
	new->next = *lst += ft_lstsize(*lst);
}
