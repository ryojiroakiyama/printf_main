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
	TEST("%c", 'x');

	printf("-----------------empy\n");
	TEST("%c", '\0');

	printf("-----------------field\n");
	TEST("%1c", 'x');
	TEST("%5c", 'x');

	printf("-----------------'.'flag\n");
	TEST("%.c", 'x');
	TEST("%5.c", 'x');

	printf("-----------------'-'flag\n");
	TEST("%-10c", 'x');
	TEST("%------------10c", 'x');

/*
	printf("-----------------star\n");
	TEST("%*c", 0, 'x');
	TEST("%*c", -1, 'x');
	TEST("%*c", -5, 'x');
	TEST("%*c", 5, 'x');
*/

//	TEST("abc%%%%%%%10cabc", 'x');
/*
	printf("--------------------------undefined behavoir\n");
	TEST("%0c", 0);//pc recognize as flag 0 and flag 0 is undefined
	TEST("%010c", 'x');
	TEST("%.5c", 'x');//precision undefined
	TEST("%.0c", 'x');
	TEST("%.1c", 'x');
	TEST("%..c", 'x');
	TEST("%.*c", -5, 'x');
*/
	return (0);
}
