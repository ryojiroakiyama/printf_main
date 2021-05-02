#include <stdio.h>

void put(char *s, char c, int ret)
{
	printf("]\n");
	printf("%s, %c\n", s, c);
	printf("ret=%d\n", ret);
	printf("--------\n");
}

int main(void)
{
	int ret;

	printf("-----------------c\n");
	ret = printf("%c", 'x');
	put("%c", 'x', ret);

	ret = printf("%.c", 'x');
	put("%.c", 'x', ret);

	ret = printf("%1c", 'x');
	put("%1c", 'x', ret);
	ret = printf("%5c", 'x');
	put("%5c", 'x', ret);

	ret = printf("%5.c", 'x');
	put("%5.c", 'x', ret);

	ret = printf("%-10c", 'x');
	put("%-10c", 'x', ret);
	ret = printf("%------------10c", 'x');
	put("%------------10c", 'x', ret);

	ret = printf("%*c", 0, 'x');
	put("%*c , 0", 'x', ret);
	ret = printf("%*c", -1, 'x');
	put("%*c, -1", 'x', ret);
	ret = printf("%*c", -5, 'x');
	put("%*c, -5", 'x', ret);
	ret = printf("%*c", 5, 'x');
	put("%*c, 5", 'x', ret);

	ret = printf("abc%%%%%%%10cabc", 'x');
	put("abc%%%%%%%10cabc", 'x', ret);

	//error
//	ret = printf("%0c", 0);//pc recognize as flag 0 and flag 0 is undefined
//	ret = printf("%010c", 'x');
//	ret = printf("%.5c", 'x');//precision undefined
//	ret = printf("%.0c", 'x');
//	ret = printf("%.1c", 'x');
//	ret = printf("%..c", 'x');
//	ret = printf("%.*c", -1, 0);
//	ret = printf("%*c", -------5, 'x');

	return (0);
}