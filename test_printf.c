#include <stdio.h>

typedef struct s_list
{
	int	flag;
	struct s_list	*next;
}	t_list;

int	ft_printf(const char *, ...)
{
	