#include "../ft_printf.h"
#include <stdio.h>

#define TEST(args...)						\
do {										\
	int	ft = ft_printf(args);				\
	printf("]\n");							\
	int original = printf(args);			\
	printf("]\n");							\
	printf("diff%d\n", original - ft);		\
	fflush(stdout);							\
} while (0)
	

int main(void)
{
	int a;

	TEST("%ca%sb%pc%dd%ie%uf%xg%Xh%%", 'z', "string", &a, -42, 422, 0, 12, -4444444);
	return (0);
}
