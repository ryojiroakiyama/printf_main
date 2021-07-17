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
	TEST("%u", 123);

	printf("-----------------field\n");
	TEST("%0u", 0);
	TEST("%1u", 123);
	TEST("%5u", 123);

	printf("-----------------'.'flag\n");
	TEST("%.u", 123);
	TEST("%.u", 0);
	TEST("%.0u", 0);
	TEST("%.0u", 1);
	TEST("%.0u", 123);
	TEST("%.3u", 123);
	TEST("%.5u", 123);

	printf("-----------------field and '.'flag\n");
	TEST("%10.3u", 123);
	TEST("%10.5u", 123);
	TEST("%10.15u", 123);

	printf("-----------------'-'flag\n");
	TEST("%-10.5u", 123);
	TEST("%------------10.5u", 123);

	printf("-----------------'0'flag\n");
	TEST("%010u", 123);
	TEST("%010.1u", 123);
	TEST("%010.5u", 123);
	TEST("%0000000000010.5u", 123);
	TEST("%010.5u", 123);

	printf("-----------------multiple\n");
	TEST("%uakiyama%u%uryojiro%u", 123, 54, -53, 524443);

/*	
	TEST("%.*u", -1, 0);
	TEST("%*.*u", -10, 5, 123);
	TEST("%-*.*u", -10, 5, 123);
	TEST("%*u", 0, 123);
*/	
	
	return (0);
}
