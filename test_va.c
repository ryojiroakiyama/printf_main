#include <stdarg.h>
#include <stdio.h>

int ft_printf(const char *fmt, ...)
{
	va_list ap;
	char	*s;
	char	c;

	va_start(ap, fmt);

	s = (char *)va_arg(ap, char *);
	c = (char)va_arg(ap, int);//beware about char

	va_end(ap);
	
	printf("in_ft:%s\n", s);
	printf("in_ft:%c\n", c);

	return (0);
}

int main(void)
{
	ft_printf("%s\n", "abc", 'a');
	printf("%s\n", "abc");
	
	return (0);
}