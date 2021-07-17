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
	TEST("%x", 123);

	printf("-----------------field\n");
	TEST("%0x", 0);
	TEST("%1x", 123);
	TEST("%5x", 123);

	printf("-----------------'.'flag\n");
	TEST("%.x", 123);
	TEST("%.x", 0);
	TEST("%.0x", 0);
	TEST("%.0x", 1);
	TEST("%.0x", 123);
	TEST("%.3x", 123);
	TEST("%.5x", 123);

	printf("-----------------field and '.'flag\n");
	TEST("%10.3x", 123);
	TEST("%10.5x", 123);
	TEST("%10.15x", 123);

	printf("-----------------'-'flag\n");
	TEST("%-10.5x", 123);
	TEST("%------------10.5x", 123);

	printf("-----------------'0'flag\n");
	TEST("%010x", 123);
	TEST("%010.1x", 123);
	TEST("%010.5x", 123);
	TEST("%0000000000010.5x", 123);
	TEST("%010.5x", 123);

	printf("-----------------multiple\n");
	TEST("%xakiyama%x%xryojiro%x", 123, 54, -53, 524443);

/*
	TEST("%.*x", -1, 0);
	TEST("%*.*x", 10, -3, 123);
	TEST("%*.*x", -10, 5, 123);
	TEST("%-*.*x", -10, 5, 123);
	TEST("%*x", 0, 123);
	
	TEST("abc%010dabc", 123);
	TEST("a%010d%*db%-1dc", -5, -123, -5, -65);
	
	TEST("a%010d%*db%-1dc", 5, 123, 5, 65);
*/
	return (0);
}
