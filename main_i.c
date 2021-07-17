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
	TEST("%i", 123);

	printf("-----------------field\n");
	TEST("%0i", 0);
	TEST("%1i", 123);
	TEST("%5i", 123);

	printf("-----------------'.'flag\n");
	TEST("%.i", 123);
	TEST("%.i", 0);
	TEST("%.0i", 0);
	TEST("%.0i", 1);
	TEST("%.0i", 123);
	TEST("%.3i", 123);
	TEST("%.5i", 123);
	TEST("%.0005i", 123);

	printf("-----------------field and '.'flag\n");
	TEST("%10.i", 0);
	TEST("%10.3i", 123);
	TEST("%10.5i", 123);
	TEST("%10.15i", 123);

	printf("-----------------'-'flag\n");
	TEST("%-10.5i", 123);
	TEST("%------------10.5i", 123);

	printf("-----------------'0'flag\n");
	TEST("%010i", 123);
	TEST("%010.i", 123);
	TEST("%010.1i", 123);
	TEST("%010.5i", 123);
	TEST("%0000000000010.5i", 123);
	TEST("%010.5i", 123);

/*
	TEST("%.*i", -1, 0);
	TEST("%*.*i", 10, -3, 123);
	TEST("%*.*i", -10, 5, 123);
	TEST("%-*.*i", -10, 5, 123);
	TEST("%*i", 0, 123);
	
	TEST("abc%010dabc", 123);
	TEST("a%010d%*db%-1dc", -5, -123, -5, -65);
	
	TEST("%0*.*i", 2, -2, 8);	
	TEST("%0*.i", 2, 8);	
*/
	printf("-------------------------------d_minus\n");
	printf("-----------------normal\n");
	TEST("%i", -123);

	printf("-----------------field\n");
	TEST("%1i", -123);
	TEST("%5i", -123);
	
	printf("-----------------'.'flag\n");
	TEST("%.i", -123);
	TEST("%.0i", -1);
	TEST("%.0i", -123);
	TEST("%.3i", -123);
	TEST("%.5i", -123);
	TEST("%.0005i", -123);

	printf("-----------------field and '.'flag\n");
	TEST("%10.3i", -123);
	TEST("%10.5i", -123);
	TEST("%10.15i", -123);

	printf("-----------------'-'flag\n");
	TEST("%-10.5i", -123);
	TEST("%------------10.5i", -123);

	printf("-----------------'0'flag\n");
	TEST("%010i", -123);
	TEST("%010.i", -123);
	TEST("%010.1i", -123);
	TEST("%010.5i", -123);
	TEST("%0000000000010.5i", -123);
	TEST("%010.5i", -123);
/*
	TEST("%*.*i", 10, -3, -123);
	TEST("%*.*i", -10, 5, -123);
	TEST("%-*.*i", -10, 5, -123);
	TEST("%*i", 0, -123);
	TEST("abc%010dabc", -123);
	TEST("a%010d%*db%-1dc", 5, 123, 5, 65);
*/
/*
	TEST("%214748i", 123);
	TEST("%.214748i", 123);
	TEST("%*.*i", 214748, 214748, 123);
	printf(0);

	printf("-------------------undefined behavior\n");
	TEST("%-010.5i", 123);//compile said ignore one of flag
	TEST("%0-10.5i", 123);
	TEST("%-----5----10.5i", 123);
	TEST("%.-4i", 123);	
	TEST("%$)0#$", 123);
	TEST("%.~i", 123);
	TEST("%**i", 5, 123);
	TEST("%*.**i", 10, 5, 123);
	TEST("%", 123);
	TEST("adsf", 123);
	TEST("%.-5i", 123);
	TEST("%10*.42i", 5, 123);
	TEST("%10.5", 123);
*/
	return (0);
}
