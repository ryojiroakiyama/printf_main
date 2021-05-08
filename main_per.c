#include "ft_printf.h"
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

	printf("-----------------%%\n");
	TEST("%%");

	TEST("%.%");
	TEST("%.0%");
	TEST("%.3%");
	TEST("%.5%");
	TEST("%.0005%");

	TEST("%1%");
	TEST("%5%");

	TEST("%10.3%");
	TEST("%10.5%");
	TEST("%10.15%");

	TEST("%-10.5%");
	TEST("%------------10.5%");

	TEST("%010%");
	TEST("%010.1%");
	TEST("%010.5%");
	TEST("%0000000000010.5%");
	TEST("%010.5%");

	TEST("%*.*%", -10, 5);
	TEST("%-*.*%", -10, 5);
	
	TEST("abc%010dabc");


	printf("-----------------undefined ?\n");
	TEST("%-010.5%");
	TEST("%0-10.5%");
	TEST("%-----5----10.5%");
	TEST("%.-4%");	
	TEST("%$)0#$");
	TEST("%.~%");
	TEST("%**d\n", 5);
	TEST("%");
	TEST("adsf");
	TEST("%.-5%");
	TEST("%10*.42%", 5);
	TEST("%10.5");

	return (0);
}
