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
	int ret;
	int	pnt;

	printf("-----------------p\n");
	TEST("%p", &pnt);

	TEST("%.p", &pnt);

	TEST("%1p", &pnt);
	TEST("%12p", &pnt);

	TEST("%5.p", &pnt);

	TEST("%-20p", &pnt);
	TEST("%------------20p", &pnt);

	TEST("%*p", 0, &pnt);
	TEST("%*p", -1, &pnt);
	TEST("%*p", -5, &pnt);
	TEST("%*p", 5, &pnt);

//	TEST("abp%%%%%%%20pabp", &pnt);

	TEST("%p", (void *)0);
	TEST("%.p", (void *)0);

	printf("------------------undifined behavior\n");
	TEST("%0p", 0);//pp recognize as flag 0 and flag 0 is undefined
	TEST("%020p", &pnt);
	TEST("%.5p", &pnt);//prepision undefined
	TEST("%.0p", &pnt);
	TEST("%.1p", &pnt);
	TEST("%.20p", &pnt);
	TEST("%..p", &pnt);

	return (0);
}
