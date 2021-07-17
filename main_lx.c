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
	printf("-----------------normal\n");
	TEST("%X", 123);

	printf("-----------------field\n");
	TEST("%0X", 0);
	TEST("%1X", 123);
	TEST("%5X", 123);

	printf("-----------------'.'flag\n");
	TEST("%.X", 123);
	TEST("%.X", 0);
	TEST("%.0X", 0);
	TEST("%.0X", 1);
	TEST("%.0X", 123);
	TEST("%.3X", 123);
	TEST("%.5X", 123);

	printf("-----------------field and '.'flag\n");
	TEST("%10.3X", 123);
	TEST("%10.5X", 123);
	TEST("%10.15X", 123);

	printf("-----------------'-'flag\n");
	TEST("%-10.5X", 123);
	TEST("%------------10.5X", 123);

	printf("-----------------'0'flag\n");
	TEST("%010X", 123);
	TEST("%010.1X", 123);
	TEST("%010.5X", 123);
	TEST("%0000000000010.5X", 123);
	TEST("%010.5X", 123);

	printf("-----------------multiple\n");
	TEST("%Xakiyama%X%Xryojiro%X", 123, 54, -53, 524443);

/*
	TEST("%.*X", -1, 0);
	TEST("%*.*X", 10, -3, 123);
	TEST("%*.*X", -10, 5, 123);
	TEST("%-*.*X", -10, 5, 123);
	TEST("%*X", 0, 123);
	
	TEST("abc%010dabc", 123);
	TEST("a%010d%*db%-1dc", -5, -123, -5, -65);
	
	TEST("a%010d%*db%-1dc", 5, 123, 5, 65);
*/
	return (0);
}
