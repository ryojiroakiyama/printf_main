#include <stdarg.h>
#include <stdio.h>

int	remote_va(va_list *ap)
{
	int nb;

	nb = (int)va_arg(*ap, int);
	return (nb);
}


int ft_printf(const char *fmt, ...)
{
	va_list ap;
	char	*s;
	char	c;
	int		nb;

	va_start(ap, fmt);

	s = (char *)va_arg(ap, char *);
	nb = remote_va(&ap);
	c = (char)va_arg(ap, int);//beware about char

	va_end(ap);

	printf("in_ft:%s\n", s);
	printf("in_fd:%d\n", nb);
	printf("in_ft:%c\n", c);

	return (0);
}

int main(void)
{
	ft_printf("%s\n", "abc", 42, 'a');
	printf("%s\n%d\n%c\n", "abc", 42, 'a');

	return (0);
}