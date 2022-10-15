#include "libft.h"


void lstdelone_f(void *f){
	free(f);
}
void check(int b)
{
	printf(b == 1 ? "Good \n" : "Not Good\n");
}
int	main(void)
{
	t_list * l =  NULL;
	 t_list * l2 =  NULL;
	ft_lstadd_back(&l, ft_lstnew((void*)1));
	/* 1 */ check(l->content == (void*)1);
	printf("1 : %d \n", (int)l->content);
	/* 2 */ check(l->next == 0);

	ft_lstadd_back(&l, ft_lstnew((void*)2));
	/* 3 */ check(l->content == (void*)1);
	/* 4 */ check(l->next->content == (void*)2);
	/* 5 */ check(l->next->next == 0);

	ft_lstadd_back(&l2, ft_lstnew((void*)3));
	ft_lstadd_back(&l2, ft_lstnew((void*)4));
	printf("before 6 : %d \n", (int )l->content);
	ft_lstadd_back(&l, l2);
	printf("after 6 : %d", (int )l->content);

	// /* 6 */ check(l->content == (void*)1);
	// /* 7 */ check(l->next->content == (void*)2);
	// /* 8 */ check(l->next->next->content == (void*)3);
	// /* 9 */ check(l->next->next->next->content == (void*)4);
	// /* 10 */ check(l->next->next->next->next == 0);

	return (0);
}
