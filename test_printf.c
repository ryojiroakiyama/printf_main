#include <stdio.h>

typedef struct s_list
{
	int		flag;
	void	*content;
	struct s_list	*next;
}	t_list;

void	ft_del(void	*content)
{
	free(content);
}

int	ft_lstnew_back(t_list **lst, char *str)
{
	t_list *new;

	if (!str)
		return (-1);
	new = ft_lstnew(str);
	if (new)
		return (-1);
	ft_lstadd_back(lst, new);
	return (1);
}

int	read_rule(t_list **lst, char *fmt, int *i, va_list *ap)
{
	

int	read_str(t_list **lst, char *fmt, int *i);
{
	int 	start;
	char	*str;

	start = *i;
	while (fmt[*i])
	{
		if (fmt[*i] == '%' && fmt[*i + 1] == '%')
			(*i)++;
		else if (fmt[*i] == '%' && fmt[*i + 1] != '%')
			break ;
		(*i)++;
	}
	return (ft_lstnew_back(lst, ft_substr(fmt, start, *i - start));
}

int	read_fmt(t_list **lst, char *fmt, va_list *ap)
{
	int 	i;
	char	*str;
	int		ret;

	i = 0;
	ret = ft_lstnew_back(lst, ft_strdup(""));
	while (fmt[i] && ret == 1)
	{
		if (fmt[i] == '%' && fmt[i + 1] != '%')
			ret = read_rule(lst, fmt, &i, ap);
		else
			ret = read_str(lst, fmt, &i);
	}
	return (ret);
}

int	ft_printf(const char *fmt, ...)
{
	t_list	*lst;
	va_list ap:
	int		ret;
	void	(*del)(void	*);

	del = ft_del;
	ret = -1;
	va_start(ap, fmt);
	if (fmt && read_fmt(&lst, fmt, &ap) != -1)
	{
		ret = put(&lst);
	}
	va_end(ap);
	if (ret == -1)
		ft_lstclear(&lst, del);
	return (ret);
}