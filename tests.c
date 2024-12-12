#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *first = (t_list *)malloc(sizeof(t_list));
	first->content = content;
	first->next = NULL;
	return (first);
}

int	main(void)
{
	int	test = 21;
	void	*ptr;

	ptr = ft_lstnew(21);
	printf("Node value: ");
	t_list *temp = ptr;
	printf("%i ", temp->content);
	return (0);
}