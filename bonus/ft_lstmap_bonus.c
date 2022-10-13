#include"../libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)){
	t_list *result = malloc(sizeof(t_list) * ft_lstsize(lst));
	if(!result)
		return 0;
	while (lst)
	{
		result->content = (*f)(lst->content);
		result->next = lst->next;
		lst++;
	}
}
