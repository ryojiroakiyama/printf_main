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
	TEST("%d", 123);

	printf("-----------------field\n");
	TEST("%0d", 0);
	TEST("%1d", 123);
	TEST("%5d", 123);

	printf("-----------------'.'flag\n");
	TEST("%.d", 123);
	TEST("%.d", 0);
	TEST("%.0d", 0);
	TEST("%.0d", 1);
	TEST("%.0d", 123);
	TEST("%.3d", 123);
	TEST("%.5d", 123);
	TEST("%.0005d", 123);

	printf("-----------------field and '.'flag\n");
	TEST("%10.d", 0);
	TEST("%10.3d", 123);
	TEST("%10.5d", 123);
	TEST("%10.15d", 123);

	printf("-----------------'-'flag\n");
	TEST("%-10.5d", 123);
	TEST("%------------10.5d", 123);

	printf("-----------------'0'flag\n");
	TEST("%010d", 123);
	TEST("%010.d", 123);
	TEST("%010.1d", 123);
	TEST("%010.5d", 123);
	TEST("%0000000000010.5d", 123);
	TEST("%010.5d", 123);

	printf("-----------------multiple\n");
	TEST("%dakiyama%d%dryojiro%d", 123, 54, -53, 524443);
/*
	TEST("%.*d", -1, 0);
	TEST("%*.*d", 10, -3, 123);
	TEST("%*.*d", -10, 5, 123);
	TEST("%-*.*d", -10, 5, 123);
	TEST("%*d", 0, 123);
	
	TEST("abc%010dabc", 123);
	TEST("a%010d%*db%-1dc", -5, -123, -5, -65);
	
	TEST("%0*.*d", 2, -2, 8);	
	TEST("%0*.d", 2, 8);	
*/
	printf("-------------------------------d_minus\n");
	printf("-----------------normal\n");
	TEST("%d", -123);

	printf("-----------------field\n");
	TEST("%1d", -123);
	TEST("%5d", -123);
	
	printf("-----------------'.'flag\n");
	TEST("%.d", -123);
	TEST("%.0d", -1);
	TEST("%.0d", -123);
	TEST("%.3d", -123);
	TEST("%.5d", -123);
	TEST("%.0005d", -123);

	printf("-----------------field and '.'flag\n");
	TEST("%10.3d", -123);
	TEST("%10.5d", -123);
	TEST("%10.15d", -123);

	printf("-----------------'-'flag\n");
	TEST("%-10.5d", -123);
	TEST("%------------10.5d", -123);

	printf("-----------------'0'flag\n");
	TEST("%010d", -123);
	TEST("%010.d", -123);
	TEST("%010.1d", -123);
	TEST("%010.5d", -123);
	TEST("%0000000000010.5d", -123);
	TEST("%010.5d", -123);
/*
	TEST("%*.*d", 10, -3, -123);
	TEST("%*.*d", -10, 5, -123);
	TEST("%-*.*d", -10, 5, -123);
	TEST("%*d", 0, -123);
	TEST("abc%010dabc", -123);
	TEST("a%010d%*db%-1dc", 5, 123, 5, 65);
*/
/*
	TEST("%214748d", 123);
	TEST("%.214748d", 123);
	TEST("%*.*d", 214748, 214748, 123);
	printf(0);

	printf("-------------------undefined behavior\n");
	TEST("%-010.5d", 123);//compile said ignore one of flag
	TEST("%0-10.5d", 123);
	TEST("%-----5----10.5d", 123);
	TEST("%.-4d", 123);	
	TEST("%$)0#$", 123);
	TEST("%.~d", 123);
	TEST("%**d", 5, 123);
	TEST("%*.**d", 10, 5, 123);
	TEST("%", 123);
	TEST("adsf", 123);
	TEST("%.-5d", 123);
	TEST("%10*.42d", 5, 123);
	TEST("%10.5", 123);
*/
	return (0);
}
