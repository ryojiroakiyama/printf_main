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

	printf("-----------------d\n");
	TEST("%X", 123);

	TEST("%.X", 123);
	TEST("%.X", 0);
	TEST("%.0X", 0);
	TEST("%.0X", 1);
	TEST("%.0X", 123);
	TEST("%.3X", 123);
	TEST("%.5X", 123);
	TEST("%.0005X", 123);

	TEST("%0X", 0);
	TEST("%1X", 123);
	TEST("%5X", 123);

	TEST("%10.X", 0);
	TEST("%10.3X", 123);
	TEST("%10.5X", 123);
	TEST("%10.15X", 123);

	TEST("%-10.5X", 123);
	TEST("%------------10.5X", 123);

	printf("---------------------------\n");	
	TEST("%010X", 123);
	TEST("%010.X", 123);
	TEST("%010.1X", 123);
	TEST("%010.5X", 123);
	TEST("%0000000000010.5X", 123);
	TEST("%010.5X", 123);

	TEST("%.*X", -1, 0);
	TEST("%*.*X", 10, -3, 123);
	TEST("%*.*X", -10, 5, 123);
	TEST("%-*.*X", -10, 5, 123);
	TEST("%*X", 0, 123);
	
	TEST("abc%010dabc", 123);
	TEST("a%010d%*db%-1dc", -5, -123, -5, -65);
	
	printf("-----------------d_minus\n");
	TEST("%X", -123);

	TEST("%.X", -123);
	TEST("%.0X", -1);
	TEST("%.0X", -123);
	TEST("%.3X", -123);
	TEST("%.5X", -123);
	TEST("%.0005X", -123);

	TEST("%1X", -123);
	TEST("%5X", -123);
	
	TEST("%10.3X", -123);
	TEST("%10.5X", -123);
	TEST("%10.15X", -123);

	TEST("%-10.5X", -123);
	TEST("%------------10.5X", -123);

	TEST("%010X", -123);
	TEST("%010.X", -123);
	TEST("%010.1X", -123);
	TEST("%010.5X", -123);
	TEST("%0000000000010.5X", -123);
	TEST("%010.5X", -123);

	TEST("%*.*X", 10, -3, -123);
	TEST("%*.*X", -10, 5, -123);
	TEST("%-*.*X", -10, 5, -123);
	TEST("%*X", 0, -123);
	
	TEST("abc%010dabc", -123);
	TEST("a%010d%*db%-1dc", 5, 123, 5, 65);

	return (0);
}
