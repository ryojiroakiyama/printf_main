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
	char *str = NULL;

	printf("-----------------s\n");
	TEST("%s", "ryojiro");

	TEST("%s", "");
	TEST("%.s", "ryojiro");
	TEST("%.s", str);
	TEST("%.0s", "ryojiro");
	TEST("%.3s", "ryojiro");
	TEST("%.10s", "ryojiro");
	TEST("%.10s", str);

	printf("-----------------------\n");
	TEST("%1s", "ryojiro");
	TEST("%10s", "ryojiro");
	TEST("%10s", str);
	TEST("%10.3s", "ryojiro");
	TEST("%10.5s", "ryojiro");
	TEST("%10.15s", "ryojiro");

	TEST("%-10.5s", "ryojiro");
	TEST("%------------10.5s", "ryojiro");


	TEST("%.*s", -1, str);
	TEST("%3s", str);
	TEST("%3.3s", str);
	TEST("%*.*s", 10, -3, "ryojiro");
	TEST("%*.*s", -10, 5, "ryojiro");
	TEST("%-*.*s", -10, 5, "ryojiro");
	TEST("%*s", 0, "ryojiro");
	
	TEST("abc%10.10sabc", "ryojiro");

	TEST("");

	TEST("%3.0s", str);
	TEST("%10.0s", "ryojiro");
	
	char s1[3];
	s1[0] = '0';
	s1[1] = '1';
	s1[2] = '2';
	TEST("%10.6s", s1);
	TEST("%10.2s", s1);

	printf("------------------undefined behavoir\n");
	TEST("%0s", "ryojiro");//recognized as flag 0 and flag 0 is undefined
	TEST("%010.5s", "ryojiro");

	return (0);
}
